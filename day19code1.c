
//Q37 Write a program to find the LCM of two numbers.


#include <stdio.h>

int main() {
    int a, b, max, lcm;

    // Input two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    // Start checking from the maximum of a and b
    max = (a > b) ? a : b;

    // Loop to find LCM
    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
