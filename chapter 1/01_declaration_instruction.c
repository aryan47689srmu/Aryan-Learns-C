#include <stdio.h>

int main(){
    int n = 45;  // this is an int data type, it can only store whole numbers
    float m = 32.23; // this is a float data type, it can store decimal values

    n = (int) m; // convert the data type to int, this is called typecasting
    printf("%d\n", n);
    return 0;
}
