#include <stdio.h>

int main()
{
    char str[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', '\0'};  
    //same as char str[] = "abcdefghij";

    
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%c", str[i]);
    // }



    printf("%s", str);  // %s is used to print a string in C. It tells the printf function to treat the corresponding argument as a string and print it until it encounters the null character ('\0').  

    return 0;
}


