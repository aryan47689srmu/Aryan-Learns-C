//Write a program to store the details of 3 employees from user defined data. 


#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int code;
    float salary;
};

int main() {
    struct employee emp[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Code: ");
        scanf("%d", &emp[i].code);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < 3; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("Code: %d\n", emp[i].code);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}
