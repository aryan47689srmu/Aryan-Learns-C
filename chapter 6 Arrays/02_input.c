#include <stdio.h>

int main()
{
    int marks[5];

    printf("Enter marks of 5 students: \n");
    // scanf("%d %d %d %d %d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4]);

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &marks[i]);
    
  }

  for (int i = 0; i < 5; i++)
  {
    printf("The value of marks at index %d is %d\n", i, marks[i]);
    
  }
   

    //printf("Marks 0 and Marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}
