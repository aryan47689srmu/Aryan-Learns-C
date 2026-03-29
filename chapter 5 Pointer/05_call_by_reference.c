#include <stdio.h>


int sum(int *, int *);


// Sum should change the value of x
int sum(int* a, int* b){
    *a = 6;
    return (*a + *b);
}

int main(){
    int x = 1, y=6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}



/*
Based on the way we pass arguments to the function, function calls are of two types. 
1. Call by value → Sending the values of arguments. 
2. Call by reference → Sending the address of arguments.

2. Call by reference, on the other hand, involves passing the address of the actual parameter to the function. This allows the function to directly modify the original variable outside the function. When a function is called using call by reference, it receives a pointer to the argument, and any changes made to the parameter inside the function will affect the original variable. This method is useful when you want to modify the value of an argument or when you want to pass large data structures without copying them. In C, you can achieve call by reference by passing the address of the variable to the function and using pointers to access and modify the value inside the function. 
*/
