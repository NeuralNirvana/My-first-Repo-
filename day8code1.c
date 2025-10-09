#include <stdio.h>

int main() {
    char ch;

    // Taking input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking character type
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
