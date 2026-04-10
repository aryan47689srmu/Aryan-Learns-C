//Ques : Complete this show function to display the content of employee.

#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

void show(struct employee e); // PASSING STRUCTURE TO A FUNCTION, we can also pass the pointer to the structure to the function, but here we are passing the structure itself, it is called pass by value, it means that a copy of the structure is passed to the function, so any changes made to the structure inside the function will not affect the original structure outside the function.   

void show(struct employee e)
{
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;
    show(e1);

    return 0;
}
