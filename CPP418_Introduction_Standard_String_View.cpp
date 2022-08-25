#include <iostream>
#include <string>      // For std::string.
#include <string_view> // For std::string_view.

void printSV(std::string_view str) // Now a std::string_view.
{
	std::cout << str << '\n';
}

void printString(std::string str)
{
	std::cout << str << '\n';
}

int main()
{
	int x{ 5 };
	std::cout << x << '\n';
	// When the definition for x is executed, the initialization value 5 is copied into the memory allocated for int x. 
	// For fundamental types, initializing (or copying) a variable is fast.

	std::string s{ "Hello, world!" };
	std::cout << s << '\n';
	// When s is initialized, the C-style string literal "Hello, world!" is copied into memory allocated for std::string s. 
	// Unlike fundamental types, initializing (or copying) a std::string is slow.
	// In the above program, all we do with s is print the value to the console, and then s is destroyed. 
	// We’ve essentially made a copy of “Hello, world!” just to print and then destroy that copy. That’s inefficient.
	// The same issue applies if we pass the value s by value to as a function parameter.

	// To address the issue with std::string being expensive to initialize (or copy), C++17 introduced std::string_view (which lives in the <string_view> header). 
	// std::string_view provides read-only access to an existing string (a C-style string literal, a std::string, or a char array) without making a copy.

	std::string_view s{ "Hello, world!" }; // Now a std::string_view.
	printSV(s);

	// This program produces the same output as the prior one, but no copies of the string “Hello, world!” are made.
	// When we initialize std::string_view s with C-style string literal "Hello, world!", s provides read-only access to “Hello, world!” without making a copy of the string. 
	// When we pass s to printSV(), parameter str is initialized from s. This allows us to access “Hello, world!” through str, again without making a copy of the string.

	// Best Practice: Prefer std::string_view over std::string when you need a read-only string, especially for function parameters.

	// Unlike std::string, std::string_view has full support for constexpr:
	constexpr std::string_view s{ "Hello, world!" };
	std::cout << s << '\n'; // s will be replaced with "Hello, world!" at compile-time.

	// A std::string_view can be created using a std::string initializer, and a std::string will implicitly convert to a std::string_view:
	std::string s{ "Hello, world" };
	std::string_view sv{ s }; // Initialize a std::string_view from a std::string.
	std::cout << sv << '\n';

	printSV(s); // Implicitly convert a std::string to std::string_view.

	// Because std::string makes a copy of its initializer, C++ won’t allow implicit conversion of a std::string from a std::string_view. 
	// However, we can explicitly create a std::string with a std::string_view initializer, or we can convert an existing std::string_view to a std::string using static_cast:

	std::string_view sv{ "balloon" };

	std::string str{ sv }; // Okay, we can create std::string using std::string_view initializer.

	// printString(sv);   // Compile error: won't implicitly convert std::string_view to a std::string.

	printString(static_cast<std::string>(sv)); // Okay, we can explicitly cast a std::string_view to a std::string.

	// Double-quoted string literals are C-style string literals by default. 
	// We can create string literals with type std::string_view by using a sv suffix after the double-quoted string literal.

	using namespace std::literals; // Easiest way to access the s and sv suffixes.

	std::cout << "foo\n";   // No suffix is a C-style string literal.
	std::cout << "goo\n"s;  // s suffix is a std::string literal.
	std::cout << "moo\n"sv; // sv suffix is a std::string_view literal.

	// Returning a std::string_view from a function is usually a bad idea (discussed in detail later).

	return 0;
}