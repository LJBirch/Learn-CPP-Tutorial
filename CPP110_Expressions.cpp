#include <iostream>

// five() is a function that returns the value 5.
int five()
{
    return 5;
}
int main()
{
    int a{ 2 };             // Initialize variable a with literal value 2.
    int b{ 2 + 3 };         // Initialize variable b with computed value 5.
    int c{ (2 * 3) + 4 };   // Initialize variable c with computed value 10.
    int d{ b };             // Initialize variable d with variable value 5.
    int e{ five() };        // Initialize variable e with function return value 5.


    // An expression is a combinations of literals, variables, operators and function calls that can be executed to produce a single value.
    // This process is called evaluation and the value produced is called the result of that expression.

    // Wherever you can use a single value in C++, you can use and expression instead and it will be evaluated to produce a single value.

    // Expression statements: Expressions must be part of an expression statement, this is a statement that consists of an expression followed by a semicolon.
    // When the statement is executed, the expression will be evaluated and the result will be discarded.
    // Example: The expression x = 5 becomes an expressions statement that will compile when in the form x = 5;

    // Rule: Values calculated in ean expression are discarded at the end of the expression.

    return 0;
}

/*
    Quiz:

    Question #1 - What is the difference between a statement and an expression?
    Answer: Statements are used when we want the program to perform an action. Expressions are used when we want the program to calculate a value.

    Question #2 - Indicate whether each of the following lines are statements that do not contain expressions, statements that contain expressions, or are expression statements.
    Question #2a: int x;
    Answer: Statement does not contain an expression (this is just a variable definition).

    Question #2b: int x = 5;
    Answer: Statement contains an expression (The right hand side of the equals side is an expression containing a single value, but the rest of the statement isn’t an expression).

    Question #2c: x = 5;
    Answer: Expression statement (the entire statement is an expression, terminated by a semicolon).

    Question #2d: std::cout << x; // Hint: operator<< is a binary operator.
    Answer: If operator<< is a binary operator, then std::cout must be the left-hand operand, and x must be the right-hand operand. Since that’s the entire statement, this must be an expression statement.

    Question #3: Determine what values the following program outputs. Do not compile this program. Just work through it line by line in your head.;

    int main()
    {
        std::cout << 2 + 3 << '\n';

        int x{ 6 };
        int y{ x - 2 };
        std::cout << y << '\n';

        int z{ };
        z = x;
        std::cout << z - x << '\n';

        return 0;
    }

    Answer: 5 
            4
            0.   
 */