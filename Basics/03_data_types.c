#include <stdio.h>
int main()
{
    int a = 10;                                 // variable declaration and initialization
    float b = 3.14;                             // variable declaration and initialization
    char c = 'A';                               // variable declaration and initialization
    double pi = 3.14159265;                     // Double precision floating-point variable declaration and initialization


    
    printf("The value of a is: %d\n", a);       // printing the value of variable a of int type
    printf("The value of b is: %.2f\n", b);     // printing the value of variable of float type
    printf("The value of c is: %c\n", c);       // printing the value of variable of char type
    printf("The value of pi is: %.8f\n", pi);   // printing the value of variable of double type
    return 0;
}
