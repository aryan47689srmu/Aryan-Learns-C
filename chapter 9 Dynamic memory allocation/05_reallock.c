#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 3;
    printf("%d", ptr[0]);

    ptr = (int*)realloc(ptr, 10 * sizeof(int)); // Reallocating the memory allocated by malloc
    printf("%d", ptr[0]);
    return 0;
}


/*
What is realloc() in C?
realloc() is a function in C that stands for "reallocation". It is used to change the size of a previously allocated memory block. The function takes two arguments: a pointer to the previously allocated memory block and the new size in bytes. If the new size is larger than the old size, realloc() may move the memory block to a new location to accommodate the increased size. If the new size is smaller, it may simply reduce the size of the existing block. The function returns a pointer to the newly allocated memory block, which may be the same as the original pointer or a new location. If the allocation fails, it returns NULL. Like malloc() and calloc(), any memory allocated by realloc() should be freed using free() when it is no longer needed to prevent memory leaks.
*/
