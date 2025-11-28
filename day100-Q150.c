//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;  // pointer stores address of structure

    // Modify structure members using ->
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%d", &ptr->marks);

    // Display modified data
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
