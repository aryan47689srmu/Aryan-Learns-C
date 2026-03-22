#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}

/*
what is decrement for loop?
A decrement for loop is a type of for loop that decreases the loop counter in each iteration. It is typically used when you want to iterate through a sequence in reverse order. The syntax of a decrement for loop in C is as follows:
for (initialization; condition; decrement) {
    // code to be executed
}*/
