// Quick Quiz - 1: What will be the output of the following code if the file "aryan2.txt" contains the following data?
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("aryan2.txt", "r");

    if(ptr == NULL){
        printf("The file does not exist sorry! \n");
        
    }
    else{

    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(ptr);
    
    }
    return 0;
}
