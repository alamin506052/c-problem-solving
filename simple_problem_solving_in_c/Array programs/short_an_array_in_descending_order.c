#include <stdio.h>

int main() {
    int arr[] = {5, 6, 8, 10, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;

    // bubble short
    for ( int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
          if (arr[j] < arr[j + 1])
          {
            // Swap arr[j] and arr[j + 1]
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
          }
          
            
        }
        
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return (0);
}