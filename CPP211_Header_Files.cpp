#include <iostream>

// Insert the contents of add.h at this point.
#include "add.h"

int main()
{
	// It becomes tedious to forward declare every function you want to use in a different file.
	// C++ has two filtetype associated with it, .cpp files and header files in format of .h or .hpp extensions.
	// The header file is used to propagate declarartion to code files.
	// They can be imported where needed, saving a lot of typing in multi-file programs.

	// Example: std::cout is forwad declared in the iostream header, but is defined as part of the C++ standard library.
	// During linking, this automatically linked into your program.

	// Best practice: Header files should generally not contain function and variable definitions, so as not to violate the one definition rule. An exception is made for symbolic constants.

	// This works because of the #include "add.h", the preprocessor will replace this with the contents of the add.h file which contains the forward declaration of the add function (its function prototype).
	std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';

	// Best practice: Use a .h suffix when naming your header files.
	// Best practice: If a header file is paired with a code file (e.g. add.h with add.cpp), they should both have the same base name (add).

	// Best practice: Source files should #include their paired header file (if one exists).
	// This allows the compiler to catch certain kinds of errors at compile time, instead of link time.

	// Whats the difference between using double quotes ("") and angle brackets (<>) when we use include?
	// Each gives the preprocessor an idea of where to look for the header file.
	
	// Angle brackets tell the preprocessor, we didnt write this header file ourselves.
	// Resulting in it only looking in the include directories, that are configured as part of your project/IDE settings.
	// It will NOT serach for the header file within your own proejcts source code.

	// Double quotes tell the preprocessor that we want a header file that we have wrote.
	// The preprocessor will first search for the header file in the current directory, if it cant find it, it will search the include directories.

	/*
		Rule: Use double quotes to include header files that you’ve written or are expected to be found in the current directory.
		Use angled brackets to include headers that come with your compiler, OS, or third - party libraries you’ve installed elsewhere on your system.
	*/

	// Best practice: When including a header file from the standard library, use the version without the .h extension if it exists. User-defined headers should still use a .h extension.

	// Some included headers will contain other headers within them, these will then be included also in your project (known as transitive includes).
	// This should not be relied on, required headers should all be explicility included.

	// Best practice: Each file should explicitly #include all of the header files it needs to compile. Do not rely on headers included transitively from other headers.

	// The include order of header shouldnt matter if done properly.

	/*
		Best practice:
		To maximize the chance that missing includes will be flagged by compiler, order your #includes as follows:

		1) The paired header file.
		2) Other headers from your project
		3) 3rd party library headers
		4) Standard library headers

		The headers for each grouping should be sorted alphabetically.
	*/

	// Header files should always include header guards (covered next).
	// Do not define variables and functions in header files (except global constants).
	// Give a header file the same name as the source file its associated with.
	// Each header file should have a specific job, and be as independent as possible.
	// Be mindful of which headers you need to explicitly include for the functionality you are using in your code files.
	// Every header you write should compile on its own (it should #include every dependency it needs).
	// Only include what you need.
	// Do not #include .cpp files.

	return 0;
}