//Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    enum Gender g;
};

int main() {
    struct Person p;
    int choice;

    printf("Enter gender (0 for MALE, 1 for FEMALE): ");
    scanf("%d", &choice);

    if (choice == 0)
        p.g = MALE;
    else
        p.g = FEMALE;

    if (p.g == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}
