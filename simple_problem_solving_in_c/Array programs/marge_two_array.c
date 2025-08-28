#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2];

    int *p = merged;

    for (int i = 0; i < size1; i++)
        *(p++) = arr1[i];  // pointer increment

    for (int i = 0; i < size2; i++)
         *(p++) = arr2[i];

    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
