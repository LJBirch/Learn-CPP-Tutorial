#include <iostream>
#include <string> // Allows use of std::string.
#include <string_view> // For std::string_view.

int main()
{
	std::cout << "Hello, world!\n";

	// So what is “Hello, world!” exactly? “Hello, world!” is a collection of sequential characters called a string. 
	// In C++, we use strings to represent text (such as names, words, and sentences). 
	// String literals (such as “Hello, world!\n”) are placed between double quotes to identify them as strings.

	// Because strings are commonly used in programs, most modern programming languages include a fundamental string data type.
	// For historical reasons, strings are not a fundamental type in C++. 
	// Rather, they have a strange, complicated type that is hard to work with (covered further later on).
	// For now, we’ll call double-quoted strings “C-style strings”, as they were inherited from the C-language.

	// C++ has introduced two additional string types into the language that are much easier and safer to work with: std::string and std::string_view (C++17). 
	// Although std::string and std::string_view aren’t fundamental types, they’re straightforward and useful enough that we’ll introduce them here rather than wait until the chapter on compound types 

	std::string name{}; // Empty string.

	std::string name{ "Alex" }; // Initialize name with string literal "Alex".
	name = "John";              // Change name to "John".

	// std::string objects can be output as expected using std::cout:
	std::string name{ "Alex" };
	std::cout << "My name is: " << name << '\n';

	std::cout << "Enter your full name: ";
	std::string name{};
	std::cin >> name; // This won't work as expected since std::cin breaks on whitespace.

	std::cout << "Enter your age: ";
	std::string age{};
	std::cin >> age;

	std::cout << "Your name is " << name << " and your age is " << age << '\n';

	// What happened? It turns out that when using operator>> to extract a string from std::cin, operator>> only returns characters up to the first whitespace it encounters.
	// Any other characters are left inside std::cin, waiting for the next extraction.

	// To read a full line of input into a string, you’re better off using the std::getline() function instead. 
	// std::getline() requires two arguments: the first is std::cin, and the second is your string variable.
	std::cout << "Enter your full name: ";
	std::string name{};
	std::getline(std::cin >> std::ws, name); // Read a full line of text into name.

	std::cout << "Enter your age: ";
	std::string age{};
	std::getline(std::cin >> std::ws, age); // Read a full line of text into age.

	std::cout << "Your name is " << name << " and your age is " << age << '\n';

	// What is std::ws?
	// We used the output manipulator function std::setprecision() to change the number of digits of precision that std::cout displayed.
	// C++ also supports input manipulators, which alter the way that input is accepted. 
	// The std::ws input manipulator tells std::cin to ignore any leading whitespace before extraction. 
	// Leading whitespace is any whitespace character (spaces, tabs, newlines) that occur at the start of the string.

	std::cout << "Pick 1 or 2: ";
	int choice{};
	std::cin >> choice;

	std::cout << "Now enter your name: ";
	std::string name{};
	std::getline(std::cin, name); // Note: no std::ws here.

	std::cout << "Hello, " << name << ", you picked " << choice << '\n';

	// The output here will be unexpected.
	// When enter is pressed after the first cin, we will have "2\n" as enter creates a newline.
	// The cin will then take 2 and extracts it to a variable, whilist \n is left behind.
	// So when we get to std::getline it sees "\n" and figures we must have previously entered an empty string.

	// The below is a fixed version of the above using std::ws:
	std::cout << "Pick 1 or 2: ";
	int choice{};
	std::cin >> choice;

	std::cout << "Now enter your name: ";
	std::string name{};
	std::getline(std::cin >> std::ws, name); // note: added std::ws here

	std::cout << "Hello, " << name << ", you picked " << choice << '\n';

	// Best Practice: If using std::getline() to read strings, use std::cin >> std::ws input manipulator to ignore leading whitespace.

	// Using the extraction operator (>>) with std::cin ignores leading whitespace.
	// std::getline() does not ignore leading whitespace unless you use input manipulator std::ws.

	// If we want to know how many characters are in a std::string, we can ask a std::string object for its length. 
	std::string name{ "Alex" };
	std::cout << name << " has " << name.length() << " characters\n";

	// .length() is a member function.
	// it’s a special type of function that is nested within std::string called a member function. 
	// Because length() lives within std::string, it is sometimes written as std::string::length() in documentation.

	// Also note that std::string::length() returns an unsigned integral value (most likely of type size_t). 
	// If you want to assign the length to an int variable, you should static_cast it to avoid compiler warnings about signed/unsigned conversions:
	int length{ static_cast<int>(name.length()) };

	// In C++20, you can also use the std::ssize() function to get the length of a std::string as a signed integer:
	std::string name{ "Alex" };
	std::cout << name << " has " << std::ssize(name) << " characters\n";

	// std::string is expensive to initialize and copy.
	// Whenever a std::string is initialized, a copy of the string used to initialize it is made. 
	// And whenever a std::string is passed by value to a std::string parameter, another copy is made. 
	// These copies are expensive, and should be avoided if possible.

	// Best Practice: Do not pass std::string by value, as making copies of std::string is expensive. Prefer std::string_view parameters.
	// This will be discussed later.

	// Double-quoted string literals (like “Hello, world!”) are C-style strings by default (and thus, have a strange type).
	// We can create string literals with type std::string by using a s suffix after the double-quoted string literal.
	using namespace std::literals; // Easiest way to access the s and sv suffixes.

	std::cout << "foo\n";   // No suffix is a C-style string literal.
	std::cout << "goo\n"s;  // s suffix is a std::string literal.
	std::cout << "moo\n"sv; // sv suffix is a std::string_view literal.

	// The “s” suffix lives in the namespace std::literals::string_literals. 
	// The easiest way to access the literal suffixes is via using directive using namespace std::literals.
	// This is one of the exception cases where using an entire namespace is okay, because the suffixes defined within are unlikely to collide with any of your code.

	/* You probably won’t need to use std::string literals very often(as it’s fine to initialize a std::string object with a C - style string literal), 
	   but we’ll see a few cases in future lessons where using std::string literals instead of C - style string literals makes things easier.
	*/

	// If you try to define a constexpr std::string, your compiler will probably generate an error:
	constexpr std::string name{ "Alex"s }; // Compile error.
	std::cout << "My name is: " << name;

	// This happens because constexpr std::string isn’t supported in C++17 or earlier, and only has minimal support in C++20. 
	// If you need constexpr strings, use std::string_view instead.

	return 0;
}