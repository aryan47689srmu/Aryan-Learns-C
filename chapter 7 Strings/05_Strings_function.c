#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Aryan";
    char s1[56] = "Aryan";
    char s2[56] = "bhai";

    // printf("%d", strlen(st));
    char target[30];
    strcpy(target, st); // target now contains "Aryan"
    // printf("%s %s", st, target);

    strcat(s1, s2); // s1 now contains "helloAryan" <no space in between>
    printf("%s", s1);

    int a = strcmp("deep", "joke"); // DJ is negative because D comes before J in the ASCII table
            strcmp("joke", "far");  // Positive value because J comes after F in the ASCII table
    // printf("%d", a);

    return 0;
}
