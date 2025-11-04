
//Q6 Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Displaying numbers before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    // Displaying numbers after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
