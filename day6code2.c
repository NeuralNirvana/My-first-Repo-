
// Q12 Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int num;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using nested if–else to check
    if (num != 0) {
        if (num > 0) {
            printf("%d is positive.\n", num);
        } else {
            printf("%d is negative.\n", num);
        }
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
