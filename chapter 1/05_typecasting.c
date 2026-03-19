#include <stdio.h>

int main(){
    int n = 45;  // this is an int data type, it can only store whole numbers
    float m = 32.23; // this is a float data type, it can store decimal values

    n = (int) m; // convert the data type to int, this is called typecasting
    printf("%d\n", n);
    return 0;
}



/*what is typecasting?
Typecasting is the process of converting a variable from one data type to another. In C, you can use typecasting to explicitly convert a variable to a different data type. This is done by placing the desired data type in parentheses before the variable you want to convert. For example, in the code above, we are converting the float variable 'm' to an int by using (int) before 'm'. This will truncate the decimal part and only keep the whole number, resulting in 'n' being assigned the value 32.*/
