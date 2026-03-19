#include <stdio.h>

int main()
{
    int a = 45;
    if (a > 65)
    {
        printf("You can drive and you are senior citizen. \n");
    }
    else if (a > 40)
    {
        printf("You can drive. \n");
    }
    else if (a > 18)
    {
        printf("You can drive and your are elder. \n");
    }
    else
    {
        printf("You cannot drive. \n");
    }
    return 0;
}




//In If else if else ladder, the conditions are checked one by one. If the first condition is true, the corresponding block of code is executed and the rest of the conditions are not checked. If the first condition is false, the next condition is checked, and so on. If none of the conditions are true, the else block is executed. This is useful when you have multiple conditions to check and you want to execute different blocks of code based on those conditions. It is important to note that only one block of code will be executed in an if else if else ladder, even if multiple conditions are true, it is important to order the conditions correctly to ensure that the correct block of code is executed.
