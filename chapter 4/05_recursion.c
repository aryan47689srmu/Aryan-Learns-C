#include <stdio.h>

int factorial(int);
// Factorial(5) = 1 X 2 X 3 X 4 X 5
// Factorial(4) = 1 X 2 X 3 X 4
// Factorial(3) = 1 X 2 X 3
// Factorial(n) = 1 x 2 X 3 X .... X n-1 X n
//  = 1 x 2 X 3 X .... X n-1

int factorial(int n)
{
    if (n == 1 || n == 0) { // Base condition is necessary to stop the recursion, otherwise it will lead to infinite recursion and eventually a stack overflow.
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n
    return n * factorial(n - 1);
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}

/*
what is a recursion?
Recursion is a programming technique where a function calls itself in order to solve a problem. It
 typically involves a base case that stops the recursion and a recursive case that breaks the problem
 into smaller subproblems. This approach can simplify code and make it easier to read, but it can
 also lead to issues such as stack overflow if the recursion is too deep or if there is no proper
 base case.

*/

/*
IMPORTANT NOTES:
1. Recursion is often a direct way to implement certain algorithms, but not
always the most direct for every algorithm. Recursion is particularly suited for
problems that can be divided into smaller, similar subproblems (like factorial
computation or tree traversal), but for some algorithms, iterative approaches
might be more straightforward or efficient.
2. The condition in a recursive function that stops further recursion is called
the base case. This correction clarifies that the base case is crucial as it
prevents infinite recursion and ensures the function terminates correctly.
3. Sometimes, due to an oversight by the programmer, a recursive function can
continue to run indefinitely without reaching a base case, potentially
causing a stack overflow or memory error. This statement highlights the risk of
infinite recursion and its consequences, emphasizing the importance of properly
defining base cases in recursive functions.
*/
