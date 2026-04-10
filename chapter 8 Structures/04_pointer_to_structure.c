#include <stdio.h>


struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee e1;
    e1.code = 100;
    struct employee *ptr;
    ptr = &e1;
    
    printf("%d\n", (*ptr).code); // dereferencing the pointer to access the code member
    printf("%d\n", ptr->code); // this is the same as (*ptr).code, It is called arrow operator and it is used to access the members of a structure through a pointer 
    
    return 0;
}
