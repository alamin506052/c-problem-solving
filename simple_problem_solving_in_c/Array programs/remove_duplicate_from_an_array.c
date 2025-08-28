#include <stdio.h>

int main() {
    int arr[] = {8, 6, 8, 2, 10, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newArr[size];
    int newSize = 0;

    for (int i = 0; i < size; i++)
    {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++)
        {
           if (arr[i] == newArr[j])
           {
               isDuplicate = 1;
               break;    
           } 
        }
        if (!isDuplicate)
        {
            newArr[newSize] = arr[i];
            newSize++;
        }
        
    }

    // Bubble sort for ascending order
    for (int i = 0; i < newSize - 1; i++)
    {
       for (int j = 0; j < newSize - i - 1; j++)
       {
        if (newArr[j] > newArr[j + 1])
        {
            int temp = newArr[j];
            newArr[j] = newArr[j + 1];
            newArr[j + 1] = temp;
        }
        
       }
       
    }
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", newArr[i]);
    }
    printf("\n");

    return 0;
}



