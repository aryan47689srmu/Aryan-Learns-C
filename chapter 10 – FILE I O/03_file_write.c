#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("aryan.txt", "a");
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}

//hat is the file write mode in C?
//In C, the file write mode is specified when opening a file using the fopen() function. The mode determines how the file will be accessed and manipulated. The common file write modes in C include:

//1. "w" (write mode): This mode is used to create a new file for writing. If the file already exists, it will be truncated (i.e., all existing content will be deleted) before writing new data.

//2. "a" (append mode): This mode is used to open an existing file for writing. If the file does not exist, it will be created. In this mode, new data will be added to the end of the file without deleting existing content.

//3. "r+" (read and write mode): This mode allows both reading and writing to a file. If the file does not exist, it will not be created. In this mode, you can read from and write to the file without truncating it.

//4. "w+" (write and read mode): This mode allows both writing and reading to a file. If the file already exists, it will be truncated before writing new data. If the file does not exist, it will be created.

//5. "a+" (append and read mode): This mode allows both appending and reading to a file. If the file does not exist, it will be created. In this mode, new data will be added to the end of the file, and you can also read from the file without truncating it.    
