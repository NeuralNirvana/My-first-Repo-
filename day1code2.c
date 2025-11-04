
//Q2-Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculating sum, difference, and product
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Handling division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("\nQuotient = %.2f\n", quotient);
    } else {
        printf("\nDivision by zero is not allowed.\n");
    }

    // Displaying results
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);

    return 0;
}
