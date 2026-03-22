#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i);   // 11

    i += 2;                              // Same as i = i + 2;
    printf("The value of i is %d\n", i); // 13

    // i++ prints i first and then increments i (Post increment Operator)
    // ++i increments i first and then prints i (Post increment Operator)

    return 0;
}

/* 
what is increment and decrement operator?
Increment and decrement operators are unary operators that are used to increase or decrease the value of a variable by 1, respectively. The increment operator is represented by '++' and the decrement operator is represented by '--'.    
*/
