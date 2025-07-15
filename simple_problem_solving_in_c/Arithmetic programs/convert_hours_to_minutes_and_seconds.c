// Write a program that asks the user to input hours and then calculates and displays the equivalent minutes and seconds.

#include <stdio.h>

int main(){
    int hours, minutes, seconds;

    printf("Enter hours:");
    scanf("%d", &hours);

    minutes = hours * 60;
    seconds = hours * 3600;

    printf("%d hours in equivalent to %d minutes or %d seconds.\n", hours, minutes, seconds);

    return 0;
}