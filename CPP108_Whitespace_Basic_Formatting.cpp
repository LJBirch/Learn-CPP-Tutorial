#include <iostream>

int main()
{
	// The C++ compilier generally ignores whitespace.
	std::cout << "Hello world!";
	std::cout << "Hello world!";
	std::cout << "Hello world!";
	std::cout
		<< "Hello world!";

	int add(int x, int y) { return x + y; }

	int add(int x, int y) {
		return x + y;
	}

	int add(int x, int y)
	{
		return x + y;
	}

	int add(int x, int y)
	{
		return x + y;
	}

	// Newlines are not allowed in quoted text.
	// std::cout << "Hello
		// world!"; // Not allowed!


	// Recommended to use 4 spaces worth of identation.

	// Google recommends this stlye for function declaration:
	int main{
	}

	// Others recommend this style:
	int main
	{
	}

	// Statements within a curly brace should start one tab in from the opening brace of the function it belongs to.

	int main()
	{
		std::cout << "Hello world!\n"; // Tabbed in one tab (4 spaces).
		std::cout << "Nice to meet you.\n"; // Tabbed in one tab (4 spaces).
	}

	// Lines should not be too long, 80 characters is the max length a line should be.
	// If its longer split it into multiple lines.
	int main()
	{
		std::cout << "This is a really, really, really, really, really, really, really, "
			"really long line\n"; // One extra indentation for continuation line.

		std::cout << "This is another really, really, really, really, really, really, really, "
			"really long line\n"; // Text aligned with the previous line for continuation line.

		std::cout << "This one is short\n";
	}

	// Best practice: Your lines should be no longer than 80 chars in length.

	// If a long line is split with an operator (e.g. << or +), the operator should be places at the start of the next line.
	std::cout << 3 + 4
		+ 5 + 6
		* 7 * 8;


	// Use whitespace to make code easier to read, align valyes or comments by adding spaces between blocks of code.
	std::cout << "Hello world!\n";                  // Cout lives in the iostream library.
	std::cout << "It is very nice to meet you!\n";  // These comments are easier to read.
	std::cout << "Yeah!\n";                         // Especially when all lined up.

	// Cout lives in the iostream library
	std::cout << "Hello world!\n";

	// These comments are easier to read
	std::cout << "It is very nice to meet you!\n";

	// When separated by whitespace
	std::cout << "Yeah!\n";

	// Using the automatic formatting feature is highly recommended to keep your code’s formatting style consistent.
}