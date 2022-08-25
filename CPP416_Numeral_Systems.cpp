#include <iostream>
#include <bitset> // for std::bitset.

int main()
{
	// In everyday life, we count using decimal numbers, where each numerical digit can be 0, 1, 2, 3, 4, 5, 6, 7, 8, or 9.
	// Decimal is also called “base 10”, because there are 10 possible digits (0 through 9).
	// By default, numbers in C++ programs are assumed to be decimal.
	
	int x{ 12 }; // 12 is assumed to be a decimal number.

	// In binary, there are only 2 digits: 0 and 1, so it is called “base 2”. 
	// In binary, we count like this: 0, 1, 10, 11, 100, 101, 110, 111, …

	// Decimal and binary are two examples of numeral systems, which is a fancy name for a collection of symbols (e.g. digits) used to represent numbers. 
	// There are 4 main numeral systems available in C++. 
	// In order of popularity, these are: decimal (base 10), binary (base 2), hexadecimal (base 16), and octal (base 8).

	// Octal is base 8 -- that is, the only digits available are: 0, 1, 2, 3, 4, 5, 6, and 7.
	int x{ 012 }; // 0 before the number means this is octal
	std::cout << x << '\n';

	// Octal is hardly ever used, and we recommend you avoid it.

	// Hexadecimal is base 16. In hexadecimal, we count like this: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F, 10, 11, 12, …
	int x{ 0xF }; // 0x before the number means this is hexadecimal.
	std::cout << x << '\n';

	// Because there are 16 different values for a hexadecimal digit, we can say that a single hexadecimal digit encompasses 4 bits. 
	// Consequently, a pair of hexadecimal digits can be used to exactly represent a full byte.

	// Prior to C++14, there is no support for binary literals. However, hexadecimal literals provide us with a useful workaround.

	int bin{};    // Assume 16-bit ints.
	bin = 0x0001; // Assign binary 0000 0000 0000 0001 to the variable.
	bin = 0x0002; // Assign binary 0000 0000 0000 0010 to the variable.
	bin = 0x0004; // Assign binary 0000 0000 0000 0100 to the variable.
	bin = 0x0008; // Assign binary 0000 0000 0000 1000 to the variable.
	bin = 0x0010; // Assign binary 0000 0000 0001 0000 to the variable.
	bin = 0x0020; // Assign binary 0000 0000 0010 0000 to the variable.
	bin = 0x0040; // Assign binary 0000 0000 0100 0000 to the variable.
	bin = 0x0080; // Assign binary 0000 0000 1000 0000 to the variable.
	bin = 0x00FF; // Assign binary 0000 0000 1111 1111 to the variable.
	bin = 0x00B3; // Assign binary 0000 0000 1011 0011 to the variable.
	bin = 0xF770; // Assign binary 1111 0111 0111 0000 to the variable.

	// In C++14, we can use binary literals by using the 0b prefix:
	bin = 0b1;        // Assign binary 0000 0000 0000 0001 to the variable.
	bin = 0b11;       // Assign binary 0000 0000 0000 0011 to the variable.
	bin = 0b1010;     // Assign binary 0000 0000 0000 1010 to the variable.
	bin = 0b11110000; // Assign binary 0000 0000 1111 0000 to the variable.
	
	// Because long literals can be hard to read, C++14 also adds the ability to use a quotation mark (‘) as a digit separator.
	int bin{ 0b1011'0010 };  // Assign binary 1011 0010 to the variable.
	long value{ 2'132'673'462 }; // Much easier to read than 2132673462.
	int bin{ 0b'1011'0010 };  // Error: ' used before first digit of value.

	// By default, C++ outputs values in decimal. However, you can change the output format via use of the std::dec, std::oct, and std::hex I/O manipulators:
	int x{ 12 };
	std::cout << x << '\n'; // Decimal (by default).
	std::cout << std::hex << x << '\n'; // Hexadecimal.
	std::cout << x << '\n'; // Now hexadecimal.
	std::cout << std::oct << x << '\n'; // Octal.
	std::cout << std::dec << x << '\n'; // Return to decimal.
	std::cout << x << '\n'; // Decimal.

	// Note that once applied, the I/O manipulator remains set for future output until it is changed again.

	// Outputting in binar is a little different:
	// std::bitset<8> means we want to store 8 bits.
	std::bitset<8> bin1{ 0b1100'0101 }; // Binary literal for binary 1100 0101.
	std::bitset<8> bin2{ 0xC5 }; // Hexadecimal literal for binary 1100 0101.

	std::cout << bin1 << '\n' << bin2 << '\n';
	std::cout << std::bitset<4>{ 0b1010 } << '\n'; // Create a temporary std::bitset and print it.

	return 0;
}