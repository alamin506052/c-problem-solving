#include <stdio.h>

// Function to calculate sum of array elements
int arraySum(int arr[], int size ) {
    int sum = 0;
    
    for (int i = 0; i < size; i++)
    // Adding each element
    {
        sum += arr[i];
    }
     // Adding each element
    return sum;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

     // Declare array
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
    // Take input into array
    scanf("%d", &arr[i]);
    }

     // Function call
    int result = arraySum(arr, n);
    printf("sum = %d\n", result);

    return 0;
}