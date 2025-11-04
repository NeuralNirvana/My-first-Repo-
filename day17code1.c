
//Q33 Write a program to check if a number is an Armstrong number.


#include <stdio.h>
#include <math.h>  // For pow() function

int main() {
    int num, original, remainder, digits = 0;
    int sum = 0;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    original = num;

    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate sum of digits raised to the power of number of digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // Check if sum equals original number
    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
