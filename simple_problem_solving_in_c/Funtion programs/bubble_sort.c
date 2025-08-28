#include <stdio.h>


// Function for Bubble Sor
void bubblesort (int arr[], int size) {
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; i++)
        {
            if (arr[j] > arr[j + 1])
            {
             // Swap arr[j] and arr[j + 1]
             int temp = arr[j];
             arr[j] = arr[j + 1];
             arr[j + 1] = temp;
            }
            
        }
        
    }
    
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {45, 62, 65, 721, 852};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, size);

    printf("Sorted array using Bubble sort: ");
    printArray(arr, size);

    return 0;
}