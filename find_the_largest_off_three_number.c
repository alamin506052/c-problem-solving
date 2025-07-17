//Write a program to find the largest of three numbers.


#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter three number:");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c)
    {
        printf("The largest number is %d\n", a);
    }else if (b>a && b>c)
    {
        printf("The largest number is %d\n", b);
    }else{
        printf("The largest number is %d\n", c);
    }

    return 0;
}