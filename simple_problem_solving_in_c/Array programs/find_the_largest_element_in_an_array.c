#include <stdio.h>

int main(){
    int arr[] = {10, 20, 40, 80, 90};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of arr:%d\n", length);
    int largest = arr[0];

    for (int  i = 0; i < length; i++)
    {
      if (arr[i] > largest)
      {
          largest = arr[i];
      }
      
    }

    printf("Largest element : %d\n", largest);
    return 0;
}