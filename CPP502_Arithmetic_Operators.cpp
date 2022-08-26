#include <iostream>

int main()
{
	// There are two unary arithmetic operators, plus (+), and minus (-). 
	// As a reminder, unary operators are operators that only take one operand.

	// The unary minus operator returns the operand multiplied by -1. In other words, if x = 5, -x is -5.
	// The unary plus operator returns the value of the operand. In other words, +5 is 5, and +x is x.

	// For readability, both of these operators should be placed immediately preceding the operand (e.g. -x, not - x).

	// There are 5 binary arithmetic operators. Binary operators are operators that take a left and right operand.
	// See https://www.learncpp.com/cpp-tutorial/arithmetic-operators/ for a full list of binary arithmetic operators.

	// It is easiest to think of the division operator as having two different “modes”.
	// If either (or both) of the operands are floating point values, the division operator performs floating point division.
	// Floating point division returns a floating point value, and the fraction is kept. 
	// For example, 7.0 / 4 = 1.75, 7 / 4.0 = 1.75, and 7.0 / 4.0 = 1.75.
	
	// If both of the operands are integers, the division operator performs integer division instead.
	// Integer division drops any fractions and returns an integer value.
	// For example, 7 / 4 = 1 because the fractional portion of the result is dropped. Similarly, -7 / 4 = -1 because the fraction is dropped.

	// If we have two integers, and want to divide them without losing the fraction, how would we do so?
	// We can use static_cast<> to convert an integer to a floating point number so that we can do floating point division instead of integer division.
	int x{ 7 };
	int y{ 4 };

	std::cout << "int / int = " << x / y << '\n';
	std::cout << "double / int = " << static_cast<double>(x) / y << '\n';
	std::cout << "int / double = " << x / static_cast<double>(y) << '\n';
	std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << '\n';

	// The above illustrates that if either operand is a floating point number, the result will be floating point division, not integer division.

	// Because writing statements such as x = x + 4 is so common, C++ provides five arithmetic assignment operators for convenience. 
	// Instead of writing x = x + 4, you can write x += 4. Instead of x = x * y, you can write x *= y.
	// See https://www.learncpp.com/cpp-tutorial/arithmetic-operators/ for a full list of availiable arithmetic operators.

	x = x + 4; // Add 4 to existing value of x.
	x += 4; // Add 4 to existing value of x.

	return 0;
}