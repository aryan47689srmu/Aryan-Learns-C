#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
} Emp; // semicolon is important

int main()
{
    // typedef int harry;
    // int a = 88;
    // printf("The value of a is %d \n", a);

    // typedef struct employee Emp;

    Emp e1;
    Emp *ptr1 = &e1;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n", ptr1->code, ptr1->salary, ptr1->name);

    return 0;
}


/*
what is typedef?
typedef is a keyword in C that is used to create an alias for a data type. It allows you to give a new name to an existing data type, making it easier to read and write code. In the example above, we have created a new data type called Emp which is an alias for struct employee. This means that we can use Emp instead of struct employee to declare variables of that type. This can make the code more concise and easier to read, especially when dealing with complex data structures. For example, instead of writing struct employee e1; we can simply write Emp e1; which is more straightforward and easier to understand.   
*/
