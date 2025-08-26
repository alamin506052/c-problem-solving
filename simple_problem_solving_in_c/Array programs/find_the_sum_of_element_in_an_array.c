#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40};

    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int i;
    for ( i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    printf("Sum of elements: %d\n", sum);
    return 0;
}