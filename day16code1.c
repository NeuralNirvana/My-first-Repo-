
//Q31 Write a program to take a number as input and print its equivalent binary representation.


#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    // Input number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 0;
    }

    // Special case: 0
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2; // Store remainder
        num = num / 2;       // Reduce number
        i++;
    }

    // Print binary in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
