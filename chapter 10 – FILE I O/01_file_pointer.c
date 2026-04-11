#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("aryan.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(ptr);

    return 0;
}
/*what is file pointer?
File pointer is a variable that holds the memory address of a file in the memory. It is used to keep track of the current position in the file and to perform various operations on the file. 
*/    
