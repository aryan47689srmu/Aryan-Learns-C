#include <stdio.h>

int change(int a); // Function prototype

int change(int a) {       // Function definition 
    a = 77; // Misnomer
    return 0;   // The value of a is changed to 77, but this does not affect the original variable passed to the function   
}

int main(){
    int b=22;
    change(b); // The value of b remains 22
    printf("b is %d", b); 

    return 0;  
} 



/*
What is a change function?
The change function is a simple function that takes an integer parameter, modifies its value within the function, and returns an integer. However, the change made to the parameter does not affect the original variable passed to the function, demonstrating that C uses pass-by-value for function arguments. This means that a copy of the variable is passed to the function, and changes to the parameter do not affect the original variable outside the function.
*/
