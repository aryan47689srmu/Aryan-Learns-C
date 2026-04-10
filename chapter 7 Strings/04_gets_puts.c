#include <stdio.h>

int main()
{
    char st[30];
    gets(st); 
    puts(st);

    return 0;
}

/*
What is gets?
gets is used to read a string from the standard input (keyboard) and store it in the specified character array. It reads characters until a newline character ('\n') is encountered or the end of the file (EOF) is reached. The newline character is replaced with a null character ('\0') to terminate the string. However, it is important to note that gets is considered unsafe and should be avoided in modern C programming due to potential buffer overflow vulnerabilities. It is recommended to use fgets instead for safer input handling.




what is puts?
  puts is used to write a string to the standard output (console) followed by a newline character. It takes a null-terminated string as an argument and prints it to the console. The function automatically appends a newline character after printing the string, so there is no need to include it in the string itself. It is a convenient way to display strings without having to manually add a newline character at the end.

*/

/* 
IMP :  We use gets instead of Fgets because gets is simpler to use and does not require specifying the maximum number of characters to read. However, it is important to note that gets is considered unsafe and should be avoided in modern C programming due to potential buffer overflow vulnerabilities. It is recommended to use fgets instead for safer input handling.
*/
