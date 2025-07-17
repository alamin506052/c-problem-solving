//Write a C program that takes two numbers and an operator (+, -, *, /) as input and performs the corresponding operation.


#include <stdio.h>

int main(){
    char operator;
    float num1, num2;

    printf("Enter an operator(+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers:");
    scanf("%f %f", &num1, &num2);

    if (operator == '+')
    {
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
    }else if (operator == '-')
    {
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    }else if (operator == '*')
    {
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    }else if (operator == '/'){
        if (num2 != 0){
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        }else{
            printf("Error! Division by zero.\n");
        }
    
   
    }else{
        printf("Invalid operator.");

    }
        return 0;
}