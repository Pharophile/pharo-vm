bytecode generator support
genJumpIf: boolean to: targetBytecodePC
	<inline: false>
	| desc fixup ok |
	<var: #desc type: #'CogSimStackEntry *'>
	<var: #fixup type: #'BytecodeFixup *'>
	<var: #ok type: #'AbstractInstruction *'>
	self ssFlushTo: simStackPtr - 1.
	desc := self ssTop.
	self ssPop: 1.
	(desc type == SSConstant
	 and: [desc constant = objectMemory trueObject or: [desc constant = objectMemory falseObject]]) ifTrue:
		["Must arrange there's a fixup at the target whether it is jumped to or
		  not so that the simStackPtr can be kept correct."
		 fixup := self ensureFixupAt: targetBytecodePC - initialPC.
		 "Must annotate the bytecode for correct pc mapping."
		 self annotateBytecode: (desc constant = boolean
									ifTrue: [self Jump: fixup]
									ifFalse: [self prevInstIsPCAnnotated
												ifTrue: [self Nop]
												ifFalse: [self Label]]).
		 ^0].
	desc popToReg: TempReg.
	"Cunning trick by LPD.  If true and false are contiguous subtract the smaller.
	 Correct result is either 0 or the distance between them.  If result is not 0 or
	 their distance send mustBeBoolean."
	self assert: (objectMemory objectAfter: objectMemory falseObject) = objectMemory trueObject.
	self genSubConstant: boolean R: TempReg.
	self JumpZero: (self ensureFixupAt: targetBytecodePC - initialPC).
	
	self extASpecifiesNoMustBeBoolean ifTrue: 
		[ extA := 0. 
		self annotateBytecode: self lastOpcode.
		^ 0].
	extA := 0.
	
.	self CmpCq: (boolean == objectMemory falseObject
					ifTrue: [objectMemory trueObject - objectMemory falseObject]
					ifFalse: [objectMemory falseObject - objectMemory trueObject])
		R: TempReg.
	ok := self JumpZero: 0.
	self CallRT: (boolean == objectMemory falseObject
					ifTrue: [ceSendMustBeBooleanAddFalseTrampoline]
					ifFalse: [ceSendMustBeBooleanAddTrueTrampoline]).
	ok jmpTarget: (self annotateBytecode: self Label).
	^0