//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;

    // Input first student
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%d", &s1.marks);

    // Input second student
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll: ");
    scanf("%d", &s2.roll);
    printf("Marks: ");
    scanf("%d", &s2.marks);

    // Compare all fields
    if ( (s1.roll == s2.roll) &&
         (s1.marks == s2.marks) &&
         (strcmp(s1.name, s2.name) == 0) ) {

        printf("\nSame\n");
    } 
    else {
        printf("\nDifferent\n");
    }

    return 0;
}
