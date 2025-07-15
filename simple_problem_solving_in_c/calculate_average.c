// Write a program that asks the user to enter three numbers, then calculates and displays their average.


#include<stdio.h>

int main(){
    float num1, num2, num3, average;

    printf("Enter three number:");
    scanf("%f %f %f", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3;
    printf("The average number is: %.2f\n",average);

    return 0;
}