// Write a program to calculate simple interest. Ask the user for the principal amount, rate of interest, and time in years. Use the formula Simple Interest = (Principal * Rate * Time) / 100.


#include<stdio.h>

int main(){
    float principal, rate, time, interst;

    printf("Enter principal amount:");
    scanf("%f", &principal);

    printf("Enter rate of interest:");
    scanf("%f", &rate);

    printf("Enter time in years:");
    scanf("%f", &time);

    interst = (principal * rate * time) / 100;

    printf("The interest is:%.2f\n", interst);

    return 0;
}