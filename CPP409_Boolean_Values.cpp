
#include <iostream>

int main()
{
	// The Boolean type can have only two values: true and false.
	// They are declared with the keyword bool.
	bool b;
	
	bool b1{ true };
	bool b2{ false };
	b1 = false;
	bool b3{}; // Default initialize to false.

	// The logical not (!) operator can be used to flip the a Boolean value.
	bool b1{ !true }; // b1 will be initialized with the value false.
	bool b2{ !false }; // b2 will be initialized with the value true.

	std::cout << true << '\n'; // true evaluates to 1.
	std::cout << !true << '\n'; // !true evaluates to 0.

	bool b{ false };
	std::cout << b << '\n'; // b is false, which evaluates to 0.
	std::cout << !b << '\n'; // !b is true, which evaluates to 1.

	std::cout << std::boolalpha; // Print bools as true or false.

	std::cout << true << '\n';
	std::cout << false << '\n';

	std::cout << std::noboolalpha; // Turns printing of bools as true or false off.

	bool b1 = 4; // Copy initialization allows implicit conversion from int to bool.
	std::cout << b1 << '\n';
	// The integer 0 is converted to false, whilist any other integer will be true.
	// This may generate a warning in some compiliers.

	// If std::boolalhpa is enabled with std::cin, it can take the words true or false and resolve them to be a boolean.
	// Otherwise it will silently fail if anything other than “0” and “1” are entered and will resolve everything to 0 (false).

	// Allow the user to enter 'true' or 'false' for boolean values
	// This is case-sensitive, so True or TRUE will not work
	std::cin >> std::boolalpha;
	std::cin >> b;

	std::cout << "You entered: " << b << '\n';

	// However, when std::boolalpha is enabled, “0” and “1” will no longer be treated as booleans.

	return 0;
}