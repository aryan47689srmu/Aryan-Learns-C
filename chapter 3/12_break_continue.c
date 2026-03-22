#include <stdio.h>

int main()
{
    for (int i = 0; i < 15; i++)
    {
        if (i == 5)
        {
            // break; // exit the loop now!
            continue; // skip this iteration now!
        }
        printf("i is %d\n", i);
    }

    printf("For loop is done!");

    return 0;
}

/*
‘break’ statement completely exits the loop.
‘continue’ statement skips the particular iteration of the loop.
*/
