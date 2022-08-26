#include <iostream>
#include <cmath>
#include <cassert> // For assert.

// Note: exp must be non-negative.
std::int64_t powint(std::int64_t base, int exp)
{
	assert(exp >= 0 && "powint: exp parameter has negative value");

	std::int64_t result{ 1 };
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}

	return result;
}

int main()
{
	// The modulus operator (also informally known as the remainder operator) is an operator that returns the remainder after doing an integer division.
	// For example, 7 / 4 = 1 remainder 3. Therefore, 7 % 4 = 3. As another example, 25 / 7 = 3 remainder 4, thus 25 % 7 = 4. 
	// Modulus only works with integer operands.

	// Modulus is most useful for testing whether a number is evenly divisible by another number (meaning that after division, there is no remainder).
	// If x % y evaluates to 0, then we know that x is evenly divisible by y.
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{};
	std::cin >> y;

	std::cout << "The remainder is: " << x % y << '\n';

	if ((x % y) == 0)
		std::cout << x << " is evenly divisible by " << y << '\n';
	else
		std::cout << x << " is not evenly divisible by " << y << '\n';

	// The modulus operator can also work with negative operands. x % y always returns results with the sign of x.
	// The remainder takes the sign of the first operand.

	// To do exponents in C++, #include the <cmath> header, and use the pow() function:
	double x{ std::pow(3.0, 4.0) }; // 3 to the 4th power.

	// Due to rounding errors in floating point numbers, the results of pow() may not be precise (even if you pass it integers or whole numbers).
	std::cout << powint(7, 12); // 7 to the 12th power.

	// Warning: In the vast majority of cases, integer exponentiation will overflow the integral type. This is likely why such a function wasn’t included in the standard library in the first place.

	return 0;
}