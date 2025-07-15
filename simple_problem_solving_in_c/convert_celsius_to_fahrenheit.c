// Write a program that takes a temperature in Celsius as input and converts it to Fahrenheit using the formula Fahrenheit = (Celsius * 9/5) + 32.

#include<stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius:");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("The temperature in Fahreheit is:%.2f\n", fahrenheit);

    return 0;
}