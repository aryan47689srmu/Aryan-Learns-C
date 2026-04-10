#include <stdio.h>

int main()
{
    char str[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', '\0'};  
    //same as char str[] = "abcdefghij";

    
    for (int i = 0; i < 10; i++)
    {
        printf("The string is: %c\n", str[i]);
    }

    return 0;
}

// What is String?
// A string is a sequence of characters that is terminated by a null character ('\0') in C. It is used to represent text and can be manipulated using various functions provided by the C standard library. Strings are typically stored as arrays of characters, and the null character indicates the end of the string.
