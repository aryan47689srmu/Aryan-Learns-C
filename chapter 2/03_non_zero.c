#include <stdio.h>

int main()
{
    if (1)
    {
        printf("This if will always execute because 1 is a non-zero value\n");
    }
    if (987545)
    {
        printf("This if will always execute because 987545 is a non-zero value\n");
    }
    if (1.11)
    {
        printf("This if will always execute because 1.11 is a non-zero value\n");
    }
    if ('a')
    {
        printf("This if will always execute because 'a' is a non-zero value\n");
    }
    if (0)
    {
        printf("This if will never execute because 0 is a zero value\n");
    }
    
    return 0;
}
