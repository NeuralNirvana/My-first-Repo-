//Q144: Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to print structure members
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter roll: ");
    scanf("%d", &st.roll);

    printf("Enter marks: ");
    scanf("%d", &st.marks);

    // Call function and pass structure
    display(st);

    return 0;
}
