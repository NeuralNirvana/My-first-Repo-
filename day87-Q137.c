//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>
#include <string.h>

// Define enum for user roles
enum Role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    enum Role role;

    // Input role as string
    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    // Convert string to enum
    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else if (strcmp(input, "GUEST") == 0)
        role = GUEST;
    else {
        printf("Invalid role!\n");
        return 0;
    }

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! Limited access granted.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
