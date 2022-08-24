#include <iostream>

int main()
{
	// Unsigned integers are integers that can only hold non-negative whole numbers.

	unsigned short us;
	unsigned int ui;
	unsigned long ul;
	unsigned long long ull;

	// See https://www.learncpp.com/cpp-tutorial/unsigned-integers-and-why-to-avoid-them/ for a list of unsigned integer ranges.

	// Unsigned integer act in the same way as signed integers, just without having a sign.
	// Due to not having signs, this basically halves the range of values they can take.
	// They overflow just the same as signed integers.
	// Minus values will wrap around, so 65536 will wrap to 0 if used in a 2 byte unsigned integer, with a range of 0 to 65,535.
	

	unsigned short x{ 0 }; // Smallest 2-byte unsigned value possible.
	std::cout << "x was: " << x << '\n';

	x = -1; // -1 is out of our range, so we get wrap-around.
	std::cout << "x is now: " << x << '\n';

	x = -2; // -2 is out of our range, so we get wrap-around.
	std::cout << "x is now: " << x << '\n';

	// Most developers believe that developers should avoid unsigned integers.
	// As mentioned above, values wrapping around can cause issues when decrementing or incrementing values (causing unexpected behaviour).
	// If an unsigned and signed integer are used in a mathematicl operation, the signed integer is converted to an unsigned interger (which results in the loss of the sign).

	signed int s{ -1 };
	unsigned int u{ 1 };

	if (s < u) // -1 is implicitly converted to 4294967295, and 4294967295 < 1 is false.
		std::cout << "-1 is less than 1\n";
	else
		std::cout << "1 is less than -1\n"; // This statement executes.


	// C++ will happily convert between signed and unsigned integers, without checking the range to make sure you dont overflow.
	// Leading to no easy way to avoid to guard or detect when this becomes an issue.

	// Best practice: Favor signed numbers over unsigned numbers for holding quantities (even quantities that should be non-negative) and mathematical operations. Avoid mixing signed and unsigned numbers.

	// Unsigned numbers are preferred when dealing with bit manipulation (covered later).
	// Also useful when their wrap around behaviour is required (e.g. encryption and random number generation).
	// Use of unsigned numbers is still unavoidable in some cases, mainly those having to do with array indexing (covered later).
	// Embedded system development, or some other processor/memory limited context, use of unsigned numbers is common and accepted for performance reasons.

	return 0;
}