#include <iostream>

// All of the following statements are part of the global namespace:
void foo();    // Okay: function forward declaration in the global namespace.
int x;         // Compiles but strongly discouraged: uninitialized variable definition in the global namespace.
int y{ 5 };   // Compiles but discouraged: variable definition with initializer in the global namespace.
x = 5;         // Compile error: executable statements not allowed in the global namespace.

int main()
{
	// C++ requires that all identifier be non-ambiguous.
	// If two identical identifiers are used in the same program in way that the linker or compiler can tell them apart, they will produce an error.
	// This error is referred to as a naming collision.

	// A namespace is a region that allows you to declare names inside of it for the purpose of disambiguation.
	// The namespace provies a scope region (called namespace scope) to the names declared inside of it.
	// A name declared in a namespace wont be mistaken for an identical name declared in another scope.

	// Within a namespace, all names must be unique. Across namespaces they do not.

	// Any name that is not defined inside a class, function, or a namespace is considered to be part of the global namespace (sometimes called the global scope).
	// Only declarations and definition statements can appear in the global namespace.

	// The use identifiers cout, cin and many others from the standard library in C++ used to be accessible without the use of std.
	// However to prevent collisions with other author defined identifiers within a program, they were moved to a namespace called std.
	// Hence why we use std::cout, we are telling the compilier we are using the identifier from the standard library called cout.
	// You have to tell the compilier that the idenitfier lives inside that namespace.

	std::cout << "Hello world!"; // WHen we say cout, we mean the cout defined in the std namespace.

	// The :: symbol is called the scope resolution operator.
	// The identifier to the left of the :: symbol indetifies the namespace that the name to the right of the :: symbol is contained within.
	// If no identifier to the left of the :: symbol is provided, the global namespace is assumed.
	
	// Best practice: Use explicit namespace prefixes to access identifiers defined in a namespace.

	// When an identifier includes a namespace prefix, the identifier is called a qualified name.

	using namespace std; // This can be used to allow access the names within a namespace without using namespace prefix.
	// However this should not be used at all, as this could lead to collisions. Explicility stating the namespace of identifiers prevents this.

	// Warning: Avoid using-directives (such as using namespace std;) at the top of your program or in header files. They violate the reason why namespaces were added in the first place.
	return 0;
}