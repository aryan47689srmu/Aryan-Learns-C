#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("the value of i is %d\n", i);
    }
    return 0;
}


/*
whtat is infinite loop?
An infinite loop is a loop that continues to execute indefinitely because the loop's terminating condition is never met. This can happen when the loop's condition always evaluates to true or when there is no condition at all. In the example above, the variable 'i' is initialized to 0 and is never updated within the loop, so the condition 'i < 10' will always be true, resulting in an infinite loop. Infinite loops can lead to unresponsive programs and should be avoided unless intentionally used for specific purposes, such as in event-driven programming or server applications.    
*/
