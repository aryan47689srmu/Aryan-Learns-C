#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    printf("The value of a and b is %d \n", a && b); // Logical AND operator  is true when both the conditions are true.
    printf("The value of a and b is %d \n", a || b); // Logical OR operator is true when at least one of the conditions is true.
    printf("The value of a and b is %d \n", !a);     // Logical NOT operator is true when the condition is false.

    if (a && b)
    {
        printf("Yes, a and b are both true. \n");
    }

    // same as writing .....
    if (a)
    {
        if (b)
        {
            printf("Yes, a and b are both true. \n");
        }
    }
    return 0;
}
