#include <stdio.h>

int main() {
    // Array to store the string
    char str[100];   // Array to store the string
    int i, length = 0;

    printf("Enter a string: ");
    // Input string with spaces until newline
    scanf("%[^\n]", str);   
    // Counting length of string
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
