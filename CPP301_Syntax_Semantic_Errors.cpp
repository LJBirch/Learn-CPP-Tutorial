#include <iostream>

int main()
{
	// A syntax errors occur when you write a statement that is not valid according to the grammar of the C++ language.
	// This includes errors such as missing semicolons, using undeclared variables, mismatched parentheses or braces, etc.

	std::cout < "Hi there"; << x; // Invalid operator (<), extraneous semicolon, undeclared variable (x).

	// Compilers will generally catch syntax errors and generate warnings or errors, so you easily identify and fix the problem.

	// A sementic error occurs when a statement is syntactically valid, but does not do what the programmer intended.

	int a{ 10 };
	int b{ 0 };
	std::cout << a << " / " << b << " = " << a / b; // Division by 0 is undefined.

	std::cout << x; // Use of uninitialized variable leads to undefined result.

	return 0;

	std::cout << "Hello, world!"; // This never executes as it's after the return statement.

	// The compiler is designed to enforce grammar, not intent.
	// Semantic errors are not always easy to spot by just looking at the code, 
}