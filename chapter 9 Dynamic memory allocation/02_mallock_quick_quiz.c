// Write a program to create a dynamic array of 5 floats using malloc().

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 3.345;
    ptr[1] = 16.345;
    ptr[2] = 6.345;
    ptr[3] = 56.345;
    ptr[4] = 66.345;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}

/*
What is malloc() in C?
malloc() is a function in C that stands for "memory allocation". It is used to dynamically allocate a block of memory on the heap during runtime. The function takes a single argument, which is the size of the memory block to be allocated in bytes. It returns a pointer to the beginning of the allocated memory block. If the allocation fails, it returns NULL. The allocated memory can be used to store data, and it should be freed using the free() function when it is no longer needed to avoid memory leaks.  
*/
