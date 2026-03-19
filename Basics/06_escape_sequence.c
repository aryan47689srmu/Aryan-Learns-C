#include <stdio.h>

int main(){
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // represents a new line
    printf("Hey I am good \\n nice"); // prints: Hey I am good \n nice
    return 0;
}

/*
  | Escape Sequence | Meaning           | Example Output                          |
  | --------------- | ---------------   | ---------------------------------       |
  | `\n`            | New line          | Moves text to next line                 |
  | `\t`            | Horizontal tab    | Gives space like tab                    |
  | `\v`            | Vertical tab      | Moves text down to next line            |
  | `\\`            | Backslash         | Prints `\`                              |
  | `\'`            | Single quote      | Prints `'`                              |
  | `\"`            | Double quote      | Prints `"`                              |
  | `\b`            | Backspace         | Deletes previous character              |
  | `\r`            | Carriage return   | Moves cursor to beginning of line       |
  | `\f`            | Form feed         | Moves cursor to next page               |
  | `\a`            | Alert             | Produces a beep sound                   |  
  | `\0`            | Null character    | Represents end of string                |
  | `\?`            | Question mark     | Prints `?`                              |
  | `\ooo`          | Octal value       | Prints character with octal value       |
  | `\xhh`          | Hexadecimal value | Prints character with hex value         |
  | `\uhhhh`        | Unicode character | Prints Unicode character with hex value |
*/
