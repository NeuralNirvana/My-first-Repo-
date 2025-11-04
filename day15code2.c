
//Q30 Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;  // Store original number for display

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;      // Get last digit
        reversed = reversed * 10 + remainder; // Append digit
        num /= 10;                 // Remove last digit
    }

    // Display result
    printf("Reverse of %d is %d\n", original, reversed);

    return 0;
}
