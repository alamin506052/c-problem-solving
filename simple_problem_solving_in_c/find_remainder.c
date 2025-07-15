// Write a program to take two numbers as input and display the remainder when the first number is divided by the second.


#include<stdio.h>

int main(){
    int num1, num2, remainder;

    printf("Enter two number:");
    scanf("%d %d", &num1, &num2);

    remainder = num1 % num2;

    printf("The remainder when %d is devided by %d is: %d\n", num1, num2, remainder);

    return 0;
}
