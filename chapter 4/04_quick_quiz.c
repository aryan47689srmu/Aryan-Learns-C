//Use the library function to calculate the area of a square with side a. 

#include <stdio.h>
#include <math.h>

int main(){
    int a ;
    scanf("%d", &a);
    printf("The area of this square is %f\n", pow(a, 2));
    return 0;
}

/*what is a pow above shown in the line 7*/
/*
The pow function is a mathematical function that calculates the power of a number. In this case, it takes two arguments: the base (a) and the exponent (2). The function returns the result of raising the base to the power of the exponent, which is equivalent to multiplying the base by itself a certain number of times. In this example, it calculates the area of a square by squaring the length of its side (a).
*/
