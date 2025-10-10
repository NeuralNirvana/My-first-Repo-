#include <stdio.h>
#include <string.h>

int main() {
    char binary[33];  // Maximum 32-bit binary number
    int length;

    // Input binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    length = strlen(binary);

    // Check if input is valid binary
    for (int i = 0; i < length; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number!\n");
            return 0;
        }
    }

    // Compute 1's complement
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else
            binary[i] = '0';
    }

    // Print result
    printf("1's complement: %s\n", binary);

    return 0;
}

