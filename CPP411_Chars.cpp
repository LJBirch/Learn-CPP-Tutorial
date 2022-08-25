#include <iostream>

int main()
{
	// The char data type was designed to hold a character. 
	// A character can be a single letter, number, symbol, or whitespace.

	// The char data type is an integral type, meaning the underlying value is stored as an integer. 
	// Similar to how a Boolean value 0 is interpreted as false and non-zero is interpreted as true, the integer stored by a char variable are intepreted as an ASCII character.

	// See https://www.learncpp.com/cpp-tutorial/chars/ for the full list of ASCII characters.

	// Character literals are always placed between single quoutes ('').
	char ch2{ 'a' }; // Initialize with code point for 'a' (stored as integer 97) (preferred).
	char ch1{ 97 }; // Initialize with integer 97 ('a') (not preferred).

	// Warning: Be careful not to mix up character numbers with integer numbers. The following two initializations are not the same:
	char ch{ 5 }; // Initialize with integer 5 (stored as integer 5).
	char ch{ '5' }; // Initialize with code point for '5' (stored as integer 53).

	// When using std::cout to print a char, std::cout outputs the char variable as an ASCII character:
	char ch1{ 'a' }; // (preferred).
	std::cout << ch1; // cout prints character 'a'.

	char ch2{ 98 }; // Code point for 'b' (not preferred).
	std::cout << ch2; // cout prints a character ('b').

	// A string is a collection of sequential characters (and thus, a string can hold multiple symbols) (discussed in detail later).

	// Be careful when entering strings when the output variable is set as a char:
	std::cout << "Input a keyboard character: "; // Assume the user enters "abcd" (without quotes).

	char ch{};
	std::cin >> ch; // ch = 'a', "bcd" is left queued.
	std::cout << "You entered: " << ch << '\n';

	// Note: The following cin doesn't ask the user for input, it grabs queued input!
	std::cin >> ch; // ch = 'b', "cd" is left queued.
	std::cout << "You entered: " << ch << '\n';

	// Chars are defined by C++ to be 1 byte in size.

	// There are some characters in C++ that have special meaning. 
	// These characters are called escape sequences. 
	// An escape sequence starts with a ‘\’ (backslash) character, and then a following letter or number.
	std::cout << "First line\nSecond line\n"; // Newline embedded from using '\n' escape sequence.

	// Another common one is the '\t' which embeds a horizontal tab.
	std::cout << "First part\tSecond part";

	// See https://www.learncpp.com/cpp-tutorial/chars/ for a full list of escape sequences.

	// Examples:
	std::cout << "\"This is quoted text\"\n";
	std::cout << "This string contains a single backslash \\\n";
	std::cout << "6F in hex is char '\x6F'\n";

	// Single char are always put between single qoutes ('a').
	// Whilist strings are put between double qoutes ("hello").

	// Best Practice: Put stand-alone chars in single quotes (e.g. ‘t’ or ‘\n’, not “t” or “\n”). This helps the compiler optimize more effectively.

	return 0;
}