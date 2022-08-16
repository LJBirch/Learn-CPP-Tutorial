#include <iostream>

int main()
{
	// Debugging tactic #1: Commenting out your code.
	// Comment out parts of your code you suspect may be causing the error.
	// If the error persists, its likely not that piece of code.

	// Debugging tactic #2: Validating your code flow.
	// Write statements that print within functions, so that when the program runs you can see which functions are being called and in what order.
	
	// Use std::cerr isntead of std::cout, when printing out for debugging purposes.
	// std::cout is buffered, so if a program crashes directly afterward a call to std::cout may or may not have an actual output yet.
	// std::cerr is unbuffered, so anything sent to it will output immediately.

	// Don't indent temporary debug statements, this makes them easier to find for removal later.
std::cerr << "main() called" << '\n';

	// Debugging tactic #3: Printing values.
	// Some bugs may be caused by calculating or passing the wrong value.
	// We can output the value of the variables or expression to ensure that they're correct.

	// Make use of the library dbg-macro for easier debugging using print statements.


	/*
		Why using printing statements to debug isn’t great:

		1) Debug statements clutter your code.
		2) Debug statements clutter the output of your program.
		3) Debug statements must be removed after you’re done with them, which makes them non-reusable.
		4) Debug statements require modification of your code to both add and to remove, which can introduce new bugs.
	*/
	
	return 0;
}