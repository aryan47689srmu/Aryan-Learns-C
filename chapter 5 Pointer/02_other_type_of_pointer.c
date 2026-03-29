#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i (j is a character pointer)

    float k = 5.232;
    float *k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of i is %p\n", &k);

    printf("The value at address j is %d\n", *(&i));

    return 0;
}

// In the above code, we have declared a character variable 'i' and a pointer 'j' that points to 'i'. We also declared a float variable 'k' and a pointer 'k1' that points to 'k'. We then print the addresses of 'i', 'j', and 'k' using the %p format specifier. Finally, we use the dereference operator * to access the value at the address stored in 'j', which is the value of 'i'.      
