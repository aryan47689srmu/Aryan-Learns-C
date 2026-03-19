#include <stdio.h>

int main(){
    int age = 15;

    if(age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }
    if(age%5==0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 5\n");
    }
    return 0;
}


// what is conditional statement?
// A conditional statement is a programming construct that allows you to execute different blocks of code based on certain conditions. It enables you to make decisions in your code and control the flow of execution. The most common conditional statements in C are the if statement, else if statement, and else statement. These statements evaluate a condition and execute a block of code if the condition is true, or another block of code if the condition is false.
