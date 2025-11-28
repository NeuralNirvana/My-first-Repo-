//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>
#include <string.h>

// Define enum for operations
enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    char opStr[20];
    enum Operation op;
    int a, b;

    // Input example: ADD 10 20
    printf("Enter operation (ADD / SUBTRACT / MULTIPLY) and two numbers: ");
    scanf("%s %d %d", opStr, &a, &b);

    // Convert input string to enum
    if (strcmp(opStr, "ADD") == 0)
        op = ADD;
    else if (strcmp(opStr, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcmp(opStr, "MULTIPLY") == 0)
        op = MULTIPLY;
    else {
        printf("Invalid operation!\n");
        return 0;
    }

    // Perform operation using switch-case
    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
