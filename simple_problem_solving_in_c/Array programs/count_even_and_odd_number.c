#include<stdio.h>

int main() {
    int arr[10];                   // Array to store 10 numbers
    int even = 0, odd = 0;         // Counters for even and odd numbers

    printf("Enter 10 number:\n");

        // Taking input
    for (int  i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

        // Counting even and odd numbers
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;   // If number is even
        }else{
            odd++;    // If number is odd
        }

    }
        // Printing results
        printf("Even number: %d\n", even);
        printf("Odd number: %d\n", odd);
      return 0;
}