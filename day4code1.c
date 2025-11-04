
//Q7 Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Displaying numbers before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Displaying numbers after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
