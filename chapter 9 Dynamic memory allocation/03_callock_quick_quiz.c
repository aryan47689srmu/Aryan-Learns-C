// Write a program to create an array of size n using calloc where n is an integer entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    ptr[0] = 3;
    printf("%d", ptr[0]);
    return 0;
}


/*
What is calloc() in C?
calloc() is a function in C that stands for "contiguous allocation". It is used to dynamically allocate a block of memory on the heap during runtime, similar to malloc(). However, calloc() also initializes the allocated memory to zero. The function takes two arguments: the number of elements to be allocated and the size of each element in bytes. It returns a pointer to the beginning of the allocated memory block. If the allocation fails, it returns NULL. Like malloc(), the memory allocated by calloc() should be freed using the free() function when it is no longer needed to prevent memory leaks.   
*/
