marshalling
ffiPushSignedChar: value in: calloutState
	<var: #calloutState type: #'CalloutState *'>
	<inline: true>
	calloutState currentArg + 4 > calloutState limit ifTrue:
		[^FFIErrorCallFrameTooBig].
	interpreterProxy longAt: calloutState currentArg put: (self cCoerceSimple: value to: #'signed char').
	calloutState currentArg: calloutState currentArg + 4.
	^0