#include <stdio.h>
#include <string.h>

struct employee  //structure definition 
{
    char name[50]; 
    int code;
    float salary;
};

int main()
{
    struct employee emp1; //structure variable declaration

    //assigning values to structure members
    strcpy(emp1.name, "John Doe");
    emp1.code = 12345;
    emp1.salary = 50000.0;

    //printing structure members
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Code: %d\n", emp1.code);
    printf("Employee Salary: %.2f\n", emp1.salary);

    return 0;
}

/*
What is a structure in C? 
Structures are defined using the 'struct' keyword, followed by the structure name and a block of code that contains the member variables. Each member variable can be of a different data type, and they are accessed using the dot operator (.) when working with structure variables.
In the example above, we defined a structure called 'employee' that contains three members: 'name' (a string), 'code' (an integer), and 'salary' (a float). We then created a structure variable 'emp1', assigned values to its members, and printed those values to the console.
*/
