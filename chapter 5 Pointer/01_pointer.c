#include <stdio.h>

int main()
{
    int i = 10;
    int *j = &i; // Declaring a pointer j and assigning it the address of i

    printf("The address of i is: %p\n", &i); // Using %p to print the address of i
    // printf("The value of i is: %u\n", &i); 

    printf("The value of j is: %p\n", j); // Using %p to print the value of j, which is the address of i

    printf("The value at address j is %d\n", *(&i)); // Using the dereference operator * to access the value at the address stored in j, which is the value of i
    return 0;
}

// What is a pointer?
// A pointer is a variable that stores the memory address of another variable. It allows you to indirectly access and manipulate the value stored at that memory address. Pointers are a powerful feature in C and C++ programming languages, enabling dynamic memory allocation, efficient array handling, and the ability to create complex data structures like linked lists and trees.

// In C, you can declare a pointer using the following syntax:
// data_type *pointer_name;
// For example, to declare a pointer to an integer, you would write:
// int *ptr;
