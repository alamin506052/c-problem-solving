// Write a program that prompts the user to enter their age. Use scanf to read the input, then use printf to display the entered age.

#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Hello,you are %d years old.\n", age);
    return 0;
}