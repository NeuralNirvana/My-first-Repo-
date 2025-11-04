
//Q36 Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int a, b, min, hcf;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    // Find the smaller number
    min = (a < b) ? a : b;

    // Loop from min down to 1 to find HCF
    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
    }

    printf("HCF (GCD) of %d and %d is %d\n", a, b, hcf);

    return 0;
}
