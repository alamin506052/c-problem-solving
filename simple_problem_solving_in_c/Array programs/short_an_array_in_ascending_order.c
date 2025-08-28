#include<stdio.h>

int main() {
    int arr[] = {10, 5, 6, 22, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;

    // Bubble sort
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
             // Swap arr[j] and arr[j + 1]
             if (arr[j]  > arr[j + 1])
             {
                 temp = arr[j];
                 arr[j] = arr[j + 1];
                 arr[j + 1] = temp;
             }
             
        }
       
    }

    printf("Shorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}