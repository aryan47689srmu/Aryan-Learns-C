#include <stdio.h>

int main()
{
    int marks[90]; // Reserve space to store 90 integers

    marks[0] = 78;
    marks[1] = 89;
    // We can go all the way till marks[89] to store the 90th integer

    printf("Marks 0 and Marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}

/*
what is an array?
An array is a collection of data items of the same type that are stored in contiguous memory locations. It allows us to store multiple values of the same type in a single variable, which can be accessed using an index.
*/
