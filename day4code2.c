
//Q8 Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Checking for valid input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Calculating sum using loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Displaying result
    printf("The sum of the first %d natural numbers is %d\n", n, sum);

    return 0;
}
