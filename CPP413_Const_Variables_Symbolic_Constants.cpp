#include <iostream>

int main()
{
	// In programming a constant is a value that may not be changed.

	int x{ 4 }; // x is a non-constant variable, can be changed at anytime.
	x = 5; // Change value of x to 5 using assignment operator.

	// A variable whose value can not be changed is called a constant variable.
	// There are many cases where it is useful to define variables with values that can not be changed. 

	// To make a variable a constant, place the const keyword in the variable’s declaration either before or after the variable type.

	const double gravity{ 9.8 };  // Preferred use of const before type.
	int const sidesInSquare{ 4 }; // "east const" style, okay but not preferred.

	// Best Practice: Place const before the type (because it is more idiomatic to do so).

	// Const variables must be initialized.
	const double gravity; // error: const variables must be initialized.
    gravity = 9.9;        // error: const variables can not be changed.

	// Const variables can be initialized from other variables (including non-const ones).

	// Reccomended constant naming convention in C++ is to start the variable with k and use camel case.
	// For example: kEarthGravity

	// Function parameters can be made constants via the const keyword.
	// However this isnt used, as arguments are passed by value to initialize these parameters so we dont care if the function changes it, as it doesnt change the original value.

	// Best Practice: Don’t use const when passing by value.

	// Return values can also be made into const.
	// However since hte value is a copy, as with above, there is no point (and can lead to impeding certain kinds of compilier optimizations).
	
	// Best Practice: Don’t use const when returning by value.

	// A symbolic constants is the name given to a constant value.
	// We saw these earlier when discussing the preprocessor.
	// They take the form of: #define identifier substitution_text
	// For example: #define MAX_STUDENTS_PER_CLASS 30

	// Due to a range of issues detailed here: https://www.learncpp.com/cpp-tutorial/const-variables-and-symbolic-constants/ favour constant variables over object-like macros.

	// Best Practice: Prefer constant variables over object-like macros with substitution text.

	// Global constants will be detailed later on.

	return 0;
}