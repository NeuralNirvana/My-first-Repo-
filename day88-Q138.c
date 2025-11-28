//Q138: Print all enum names and integer values using a loop.

#include <stdio.h>

// Enum definition
enum Colors { RED, YELLOW, GREEN };

int main() {
    // Store names for printing
    const char *colorNames[] = {
        "RED", "YELLOW", "GREEN"
    };

    printf("Enum values and names:\n");

    // Loop through all enum values
    for (int i = RED; i <= GREEN; i++) {
        printf("%s = %d\n", colorNames[i], i);
    }

    return 0;
}
