
//Q27 Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    // Calculate sum of first n odd numbers
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // nth odd number formula
    }

    // Display the result
    printf("The sum of the first %d odd numbers is %d\n", n, sum);

    return 0;
}
