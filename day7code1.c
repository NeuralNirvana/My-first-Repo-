#include <stdio.h>

int main() {
    int year;

    // Taking input from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
