#include <stdio.h>

void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4, b = 6;
    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);
    return 0;
}




/*This function is capable of swapping the values passed to it. If a = 4 and b = 6 before a 
call to swap(a, b), then a = 6 and b = 4 after calling swap. This is because we are passing the addresses of a and b to the swap function, allowing it to modify the original variables. If we were to pass a and b by value, the swap function would only modify its local copies of a and b, and the original variables in main would remain unchanged.   */
