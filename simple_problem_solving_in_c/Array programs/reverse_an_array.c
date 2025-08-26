#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newArr[size];

    // Reverse করে নতুন array তে কপি
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[size - 1 - i];
    }

    // Print new array
    printf("New array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}
