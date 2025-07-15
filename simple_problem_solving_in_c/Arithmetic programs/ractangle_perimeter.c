// Write a program to calculate the perimeter of a rectangle. Prompt the user for the length and width, then compute the perimeter using the formula Perimeter = 2 * (length + width).

#include<stdio.h>

int main(){
    float length, width, perimeter;

    printf("Enter length of the ractangle:");
    scanf("%f", &length);

    printf("Enter width of the ractangle:");
    scanf("%f", &width);

    perimeter = 2 * (length + width);
    printf("The perimeter of the ractangle is: %.2f", perimeter);

    return 0;

}