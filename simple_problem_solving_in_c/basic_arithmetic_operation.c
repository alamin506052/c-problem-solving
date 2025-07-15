// Write a program that takes two numbers from the user and performs addition, subtraction, multiplication, and division. Print the results of each operation.

#include<stdio.h>
int main(){
    float num1, num2;
    printf("Enter 1st number:");
    scanf("%f", &num1);

    printf("Enter 2nd number:");
    scanf("%f", &num2);

    printf("Addition: %.2f\n", num1 + num2);
    printf("Subtraction: %.2f\n", num1 - num2);
    printf("Multiplication: %.2f\n", num1 * num2);

    return 0;
}