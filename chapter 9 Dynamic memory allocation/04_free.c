#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in c
    ptr[0] = 3;
    free(ptr); // Deallocating the memory allocated by malloc
    printf("%d", ptr[0]);
    return 0;
}

//what is free() in C?
//free() is a function in C used to deallocate memory that was previously allocated using malloc(), calloc(), or realloc(). It takes a pointer to the memory block to be deallocated as its argument. After calling free(), the memory is returned to the system and can be reused for other purposes. It's important to call free() for every dynamically allocated memory block to prevent memory leaks.  
