// Write a program that takes a distance in kilometers as input and converts it to miles using the conversion factor 1 kilometer = 0.621371 miles.

#include <stdio.h>

int main(){
    float kilometers, miles;

    printf("Enter distance in kilometers:");
    scanf("%f", &kilometers);

    miles = kilometers * 0.621371;
    printf("The distance in miles is: %.2f\n", miles);

    return 0;

}