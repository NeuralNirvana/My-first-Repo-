//Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);

        printf("\n");
    }

    // Print all student details
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
