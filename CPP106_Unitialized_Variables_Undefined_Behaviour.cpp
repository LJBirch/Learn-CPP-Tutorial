#include <iostream>

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
	// C++ doesnt initialize most variables to a given value automatically.
	// When a variable is assigned a memory location by the compilier, the default value is whatever value happens to be in that memory location.
	
	// Initialization = The object is given a known value at the point of definition.
	// Assignment = The object is given a known value beyond the point of definition.
	// Uninitialized = The object has not been given a known value yet.
	// Initialization is not the complete opposite of Uninitialized.

	int x; // Uninitialized.

	doNothing(x); // Make the compiler think we're assigning a value to this variable, Visual Studio will throw an compiler error if we dont do this.

	std::cout << x; // Will output whatever is at the memory location.

	// Rule: Take care to avoid all situations that result in undefined behaviour, such as using uninitialized variables.
}


/*
	Quiz:

		Question #1 - What is an uninitialized variable? Why should you avoid using them?
		Answer: An uninitialized variable is a variable that has not been given a value by the program (generally through initialization or assignment). Using the value stored in an uninitialized variable will result in undefined behavior..

		Question #2 - What is undefined behavior, and what can happen if you do something that exhibits undefined behavior?
		Answer: Undefined behavior is the result of executing code whose behavior is not well defined by the language. The result can be almost anything, including something that behaves correctly.
*/