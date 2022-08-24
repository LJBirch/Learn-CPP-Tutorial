#include <iostream>

int main()
{
	// An integer is an integral type that can represent positive or negative whole numbers.

	// See https://www.learncpp.com/cpp-tutorial/signed-integers/ for all types of integers useable in C++.
	// The key difference between the various integer types is that they have varying sizes, the larger integers can hold bigger numbers.

	// C++ only guarntees that integers will have a certain minimum size, not that they will have a specific size.

	// When an integer is either positive, negative or zero that is called the number's sign.
	// By default integers are signed, meaning that the number's sign is stored as part of the number (using a single bit called the sign bit).
	// Therefore a signed integer can hold both positivie and negative numbers (and 0).
	// By default all integers are signed in C++.

	short s;      // prefer "short" instead of "short int"
	int i;
	long l;       // prefer "long" instead of "long int"
	long long ll; // prefer "long long" instead of "long long int"

	signed short ss;
	signed int si;
	signed long sl;
	signed long long sll;

	// Best practice: Prefer the shorthand types that do not use the int suffix or signed prefix.

	// We call the set of specific values that a data type can hold its range.
	// For example: 8-bit integer contains 8 bits. 28 is 256, so an 8-bit integer can hold 256 possible values. There are 256 possible values between -128 to 127, inclusive.

	// See https://www.learncpp.com/cpp-tutorial/signed-integers/ for a table containing the range of values signed integers in C++.

	// Integer overflow (often called overflow for short) occurs when we try to store a value that is outside the range of the type.
	// Essentially, the number we are trying to store requires more bits to represent than the object has available.
	// In such a case, data is lost because the object doesn’t have enough memory to store everything.

	// Warning: Signed integer overflow will result in undefined behavior.

	// If there is any suspicion that an object might need to store a value that falls outside its range, use a type with a bigger range.

	// Integer division will drop the fractional component.
	std::cout << 8 / 5 << '\n'; // This will output 1, which is incorrect.

	// This is because integers CANNOT hold fractional values.

	// Warning: Be careful when using integer division, as you will lose any fractional parts of the quotient. However, if it’s what you want, integer division is safe to use, as the results are predictable.
	

	return 0;
}