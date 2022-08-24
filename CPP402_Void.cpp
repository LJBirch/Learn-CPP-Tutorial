#include <iostream>

// Most common use of void.
void returnNothing()
{
	std::cout << "I dont return anything!";
}

int main()
{
	// Void basically means "no type"!
	void value; // Won't work, variables cannot be defined with a void type.

	// In C, void was used to indicate that a function takes not parameters.
	// In C++ this deprecated and shouldnt be used, instead just pass no parameters to the function.

	// Best practice: Use an empty parameter list instead of void to indicate that a function has no parameters.

	// Void is used in some advanced C++ pointers, but will be covered much later.

	return 0;
}