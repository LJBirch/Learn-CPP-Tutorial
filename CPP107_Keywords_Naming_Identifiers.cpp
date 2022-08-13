#include <iostream>

int main()
{
	// C++ reserves 92 words for its own use as of release C++20.
	// Each has a special meaning within the C++ language, a full list can be seen here: https://www.learncpp.com/cpp-tutorial/keywords-and-naming-identifiers/.
	// C++ also has special identifiers, they have specific meaning when used in context but are not reserved.

	// Rules for identifiers:
	// 1) Cannot be a keyword.
	// 2) Can only be composed of letters, numbers, and the underscore character.
	// 3) Must begin with a letter or an underscore.
	// 4) C++ is case sensitive, nvalue is NOT the same as nValue or NVALUE.

	// Best practices for naming:
	int value; // Correct

	int Value; // Incorrect (should start with lower case letter).
	int VALUE; // Incorrect (should start with lower case letter).
	int VaLuE; // Incorrect (see your psychiatrist) ;).

	// Function names start with a lower case.
	// Identifier types start with a capital letter, these are user defined types such as classes, structs, enumerations.

	// Can seperate variables and functions by either camel case or underscore.
	int my_variable_name; // Correct (separated by underscores/snake_case).
	int my_function_name(); // Correct (separated by underscores/snake_case).

	int myVariableName; // Correct (intercapped/CamelCase).
	int myFunctionName(); // Correct (intercapped/CamelCase).

	int my variable name; // Invalid (whitespace not allowed).
	int my function name(); // Invalid (whitespace not allowed).

	int MyVariableName; // Valid but incorrect (should start with lower case letter).
	int MyFunctionName(); // Valid but incorrect (should start with lower case letter).


	// Best practice: When working in an existing program, use the conventions of that program (even if they don’t conform to modern best practices). Use modern best practices when you’re writing new programs.

	// Dont start with a underscore.
	// Identifier should make clear what value they're holding.
	// Identifier naming should depend on context, try to make its length proportional to how widely it is used.
	// Reduce abbreviations.
	// Add clarifying comments to variables to give proper context.

	// Holds number of chars in a piece of text -- including whitespace and punctuation!
	int numberOfChars;

	return 0;
}