

//Q28 Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>

int main() {
    int n;
    long long product = 1; // long long to handle large products

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    // Calculate product of even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Display result
    printf("Product of even numbers from 1 to %d is %lld\n", n, product);

    return 0;
}
