#include <stdio.h>

int sum(int, int);

int sum(int a, int b)
{
    a = 6; // This change will not affect the value of x in main() because we are working with a copy of the value of x. 
    return a + b;
}

int main()
{
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(x, y));
    printf("The value of x is %d", x);
    return 0;
}

/*
Based on the way we pass arguments to the function, function calls are of two types.
1. Call by value → Sending the values of arguments.
2. Call by reference → Sending the address of arguments.

1. Call by value, a copy of the actual parameter is passed to the function. This means that any changes made to the parameter inside the function do not affect the original variable outside the function. The function works with a copy of the data, and the original data remains unchanged. This is the default method of passing arguments in C and C++. When a function is called, the values of the arguments are copied into the parameters of the function. If you modify the parameter inside the function, it does not affect the original argument passed to the function.
*/
