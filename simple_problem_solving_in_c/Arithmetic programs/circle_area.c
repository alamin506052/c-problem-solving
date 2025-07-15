// Write a program to calculate the area of a circle. Ask the user to enter the radius, then calculate the area using the formula area = 3.14 * radius * radius and display the result.




#include<stdio.h>
int main(){
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("The area of the circle is : %.2f\n", area);

    return 0;
}