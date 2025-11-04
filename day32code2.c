
//Q64 (Arrays (1D))
//Find the digit that occurs the most times in an integer number.


#include <stdio.h>

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    int count[10] = {0}; // Array to count frequency of each digit

    // Count occurrences of each digit
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    int maxDigit = 0;
    int maxCount = count[0];

    // Find the digit with the maximum frequency
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);
    return 0;
}
