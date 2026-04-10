#include <stdio.h>

int main()
{
    char st[4];
    scanf(" %s", st);
    printf(" %s", st);
    return 0;
}

/*
Note: 
1. The string should be short enough to fit into the array. 
2. scanf cannot be used to input multi-word strings with spaces.
3. scanf automatically adds a null character when the enter key is pressed.
*/
