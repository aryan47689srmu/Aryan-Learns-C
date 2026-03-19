#include <stdio.h>
int main()
{
    printf("Size of int: %lu bytes\n", sizeof(int));     // printing the size of int data type
    printf("Size of float: %lu bytes\n", sizeof(float)); // printing the size of float data type
    printf("Size of char: %lu bytes\n", sizeof(char));   // printing the size of char data type
    printf("Size of double: %lu bytes\n", sizeof(double)); // printing the size of double data type
    printf("Size of long long: %lu bytes\n", sizeof(long long)); // printing the size of long long data type
    printf("Size of short: %lu bytes\n", sizeof(short)); // printing the size of short data type
    printf("Size of long: %lu bytes\n", sizeof(long)); // printing the size of long data type
    printf("Size of boolean: %lu bytes\n", sizeof(_Bool)); // printing the size of boolean data type
    return 0;
}
