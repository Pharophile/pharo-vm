*VMMaker-simulated image growing
copyGrownBy: n
	"Create a new collection containing all the elements from aCollection."

	^ (self class new: self size + n) replaceFrom: 1 to: self size with: self