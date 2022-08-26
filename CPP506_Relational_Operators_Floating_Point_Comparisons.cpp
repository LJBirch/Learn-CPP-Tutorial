#include <iostream>
#include <cmath> // For std::abs().

// Better method.
// Return true if the difference between a and b is within epsilon percent of the larger of a and b.
bool approximatelyEqualRel(double a, double b, double relEpsilon)
{
    return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

// Unreliable method.
// Epsilon is an absolute value.
bool approximatelyEqualAbs(double a, double b, double absEpsilon)
{
    // If the distance between a and b is less than absEpsilon, then a and b are "close enough".
    return std::abs(a - b) <= absEpsilon;
}

int main()
{
	// Relational operators are operators that let you compare two values. There are 6 relational operators:
	// See https://www.learncpp.com/cpp-tutorial/relational-operators-and-floating-point-comparisons/ for full list of relational operators.

    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    if (x == y)
        std::cout << x << " equals " << y << '\n';
    if (x != y)
        std::cout << x << " does not equal " << y << '\n';
    if (x > y)
        std::cout << x << " is greater than " << y << '\n';
    if (x < y)
        std::cout << x << " is less than " << y << '\n';
    if (x >= y)
        std::cout << x << " is greater than or equal to " << y << '\n';
    if (x <= y)
        std::cout << x << " is less than or equal to " << y << '\n';

    // By default, conditions in an if statement or conditional operator (and a few other places) evaluate as Boolean values.
    bool b1{ true };

    // Dont do this:
    if (b1 == true)
    {
        
    }

    // Do this instead:
    if (b1)
    {

    }

    // Similiarly dont do this:
    if (b1 == false)
    {

    }

    // Do this:
    if (!b1)
    {

    }

    // Best Practice: Don’t add unnecessary == or != to conditions. It makes them harder to read without offering any additional value.

    // If a high level of precision is required, comparing floating point values using any of the relational operators can be dangerous.
    // This is because floating point values are not precise, and small rounding errors in the floating point operands may cause unexpected results.

    // When the less than and greater than operators (<, <=, >, and >=) are used with floating point values, they will usually produce the correct answer (only potentially failing when the operands are almost identical).
    // Because of this, use of these operators with floating point operands can be acceptable, so long as the consequence of getting a wrong answer when the operands are similar is slight.

    // The equality operators (== and !=) are much more troublesome. Consider operator==, which returns true only if its operands are exactly equal. 
    // Because even the smallest rounding error will cause two floating point numbers to not be equal, operator== is at high risk for returning false when a true might be expected. 
    // Operator!= has the same kind of problem.
    // For this reason, use of these operators with floating point operands should generally be avoided.

    // Warning: Avoid using operator== and operator!= to compare floating point values if there is any chance those values have been calculated.

    // There is one notable exception case to the above: it is okay to compare a low-precision (few significant digits) floating point literal to the same literal value of the same type.

    // So how can we reasonably compare two floating point operands to see if they are equal?
    // The most common method of doing floating point equality involves using a function that looks to see if two numbers are almost the same.
    // If they are “close enough”, then we call them equal. 
    // The value used to represent “close enough” is traditionally called epsilon. 
    // Epsilon is generally defined as a small positive number (e.g. 0.00000001, sometimes written 1e-8).

    // Doing the above has its downsides, as we need to know the size of epsilon in advanced.
    // If we know we’re going to have to scale epsilon in proportion to the magnitude of our inputs, we might as well modify the function to do that for us.
    // In this case, instead of epsilon being an absolute number, epsilon is now relative to the magnitude of a or b.
    // See https://www.learncpp.com/cpp-tutorial/relational-operators-and-floating-point-comparisons/ for full details of how this is implemented and why it works.
    // This approach works well except when dealing with numbers that approach 0 and need modifying to do so, see the above link.

	return 0;
}