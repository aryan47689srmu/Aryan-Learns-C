#include <stdio.h>

int main()
{
      int a;
      printf("Enter a : ");
      scanf("%d", &a);
      switch (a)
      {
      case 1:
            printf("You entered 1\n");
            break;

      case 2:
            printf("You entered 2\n");
            break;

      case 3:
            printf("You entered 3\n");
            break;

      case 4:
            printf("You entered 4\n");
            break;

      default:
            printf("You entered something else\n");
      }

      return 0;
}

/*
What is switch statement?
A switch statement is a control flow statement that allows you to execute different blocks of code based on the value of a variable or an expression. It is an alternative to using multiple if-else statements when you have a large number of conditions to check. The switch statement evaluates the expression and compares it against a list of case labels. If a match is found, the corresponding block of code is executed. If no match is found, the default block of code is executed (if provided). 
*/
