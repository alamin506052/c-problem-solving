#include<stdio.h>
// Function to calculate sum of array elements
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
         // Add each element to sum
         sum += arr[i];
    }
    return sum;
}


int main () {
    int arr[1000];
    int n = 0;
    printf("Enter one by one Type -1 to finish:\n");

    while (1) {
    int temp;
    scanf("%d", &temp);
    // If user types -1, stop input
    if (temp == -1) break;
    arr[n] = temp;
    // Increment count
    n++;
    }
    // Remove leftover newline from previous scanf
    getchar();
    // Wait for user to press Enter
    getchar();

    int result = arraySum(arr, n);
    printf("Sum = %d\n", result);
    return 0;
}
