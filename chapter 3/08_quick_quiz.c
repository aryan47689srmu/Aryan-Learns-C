//Write a program to print first ‘n’ natural number using do-while loop. 


#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d",&n);

    do
    {
        printf("the value of n is %d\n", i);
        i++;
    } while (i<=n);
    

    return 0;
}
