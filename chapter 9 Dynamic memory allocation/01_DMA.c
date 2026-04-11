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
    ptr[1] = 6;
    printf("%d", ptr[0]);
    return 0;
}



//what is DMA?
//DMA stands for Dynamic Memory Allocation. It is a technique in programming that allows the allocation of memory during runtime, as opposed to static memory allocation which occurs at compile time. In C, functions like malloc(), calloc(), realloc(), and free() are used for dynamic memory allocation. This allows programmers to create data structures that can grow or shrink in size as needed, providing flexibility in memory management.  
