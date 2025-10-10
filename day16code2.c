#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; // Store original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;              // Get last digit
        reversed = reversed * 10 + remainder; // Append to reversed
        num /= 10;                         // Remove last digit
    }

    // Check if original and reversed numbers are equal
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
