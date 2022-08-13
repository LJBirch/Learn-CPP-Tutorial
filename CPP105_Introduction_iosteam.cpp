#include <iostream>

int main_old() 
{
	// << is the insertion operator, in this case it inserts the string to the cout function.
	std::cout << "Hello World!";

	// Can character output (cout) numbers too.
	std::cout << 4;

	// Cout a variable.
	int x{ 5 };
	std::cout << x;

	// Can use the << operator multiple times.
	std::cout << "Hello " << "World!";

	// Using << to combine variables and strings.
	std::cout << "x is equal to: " << x;

	// We need to explicitly tell the console when to move the cursor to the next line.
	std::cout << "First sentence.";
	std::cout << "Second sentence.";

	// We can use endl or \n opertor to do this.
	std::cout << "\nFirst sentence." << std::endl;
	std::cout << "Second sentence." << std::endl;

	// Best Practice: Output a newline whenever a line of output is complete.
	// However endl also flushes the output everytime, which std::cout often does anyway.
	// Therefore using \n is typically preferred, as it moves the cursor without flushing.

	// Single quotes are need when using \n on its own, when embedded in text double quotes can be used.
	std::cout << "x is equal to: " << x << '\n'; 
	std::cout << "And that's all, folks!\n";

	// Best Practice: Use '\n' over std:endl when outputting text to the console.


	// >> is the extraction operator, in this case it pulls the input value from cin to the variable.
	// Character input (cin).
	std::cin >> x;
	std::cout << "You entered " << x << '\n'; // \n isnt neccessary as the user pressing enter will move the cursor to a newline.

	int y{ };
	std::cin >> x >> y;
	std::cout << "You entered " << x << " and " << y << '\n';

	return 0;
}

int main()
{
	std::cout << "Enter a number: "; // ask user for a number
	int x{}; // define variable x to hold user input
	std::cin >> x; // get number from keyboard and store it in variable x
	std::cout << "You entered " << x << '\n';
	return 0;
}

/*
	Quiz: Consider the program main above, what happens if we enter:

		Question #1a - A letter, such as h?
		Answer: x is 0.

		Question #1b - A number with a fractional component. Try numbers with fractional components less than 0.5 and greater than 0.5 (e.g. 3.2 and 3.7)?
		Answer: The fractional component is dropped.

		Question #1c - A small negative integer, such as -3?
		Answer: This works fine.

		Question #1d - A word, such as Hello?
		Answer: x is 0.

		Question #1e - A really big number (at least 3 billion)?
		Answer: You are most likely to get the number 2147483647. This happens because x can only hold numbers up to a certain size. If you enter a value larger than the largest number x can hold, it will be set to the largest number that x can hold (which is probably 2147483647, but might be different on your system).

		Question #1f - A small number followed by some letters, such as 123abc?
		Answer: x gets the numeric value (e.g. 123).
*/