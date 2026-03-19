#include <stdio.h>

int main()
{
    //comdition ? expression-if-else : expression-if-failed
    int a = 45;
    int b = 40;
    (a > b) ? printf("a is greater than b. \n") : printf("b is greater than a. \n");


    return 0;
}


//what is ternary operator?
//The ternary operator, also known as the conditional operator, is a shorthand way of writing an if-else statement in C. It takes three operands: a condition, an expression to evaluate if the condition is true, and an expression to evaluate if the condition is false. The syntax for the ternary operator is as follows:
//condition ? expression-if-true : expression-if-false;
