#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("aryan.txt", "r");
    while (1)
    {
        ch = fgetc(ptr); 
        printf("%c", ch);
        // when all the content of a file has been read break
        if (ch == EOF)
        {
            break;
        }
    }
        return 0;
}

// what is reading a file character by character (c by c) in C?
// Reading a file character by character in C refers to the process of accessing and processing each individual character from a file sequentially. This is typically done using functions like fgetc() or getc(), which read one character at a time from the file stream. This method allows for fine-grained control over the reading process, enabling you to handle each character as needed, such as checking for specific characters, counting occurrences, or processing data in a specific way.    
