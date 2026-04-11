#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("aryan.txt", "a");
    // char c = fgetc(ptr); // used to read a character from file
    // printf("%c", c);
    fputc('c', ptr);
    return 0;
}


//what is fgets and fputs in C?
//In C, fgets and fputs are functions used for reading and writing strings to and from files, respectively.
//fgets(ptr, size, file); // reads a string from the file
//fputs(string, file); // writes a string to the file
