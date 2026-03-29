#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;


    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));

    return 0;
}


// In the above code, we have declared an integer variable 'i' and a pointer 'j' that points to 'i'. We also declared a pointer to a pointer 'k' that points to 'j'. We then print the value of 'i' using different methods: directly, through the pointer 'j', and through the pointer to pointer 'k'. The output will show the value of 'i' as 6 in all cases.    
