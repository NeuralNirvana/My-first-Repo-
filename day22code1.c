//Q43 Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, temp, rem, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // store original number

    while (temp > 0) {
        rem = temp % 10; // get last digit
        fact = 1;

        // find factorial of each digit
        for (i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact; // add factorial to sum
        temp /= 10;  // remove last digit
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    return 0;
}
