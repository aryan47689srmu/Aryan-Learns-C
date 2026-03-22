#include <stdio.h>

int main()
{
    int i = 0;

    do
    {
        printf("the value of i is %d\n", i);
        i++;
    } while (i < 10);
    
    return 0;
}


/*
what is do while loop?
A do-while loop is a control flow statement that executes a block of code at least once and then repeatedly executes the block as long as a specified condition is true. The syntax of a do-while loop in C is as follows:
do {
    // code to be executed
} while (condition);
*/
