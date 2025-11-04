
//Q39 Write a program to find the product of odd digits of a number.


#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;  // Use long long to handle large products
    int hasOdd = 0;         // Flag to check if there is at least one odd digit

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;  // Store original number for display

    // Make number positive if negative
    if (num < 0) {
        num = -num;
    }

    // Process each digit
    while (num != 0) {
        remainder = num % 10;  // Get last digit
        if (remainder % 2 != 0) {  // Check if odd
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;  // Remove last digit
    }

    // Display result
    if (hasOdd) {
        printf("Product of odd digits of %d is %lld\n", original, product);
    } else {
        printf("%d has no odd digits.\n", original);
    }

    return 0;
}
