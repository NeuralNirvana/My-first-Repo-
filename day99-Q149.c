//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/

#include <stdio.h>
#include <stdlib.h>   // for malloc()

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;

    // allocate memory for 1 student
    s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory not allocated!\n");
        return 0;
    }

    // input details
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%d", &s->marks);

    // print details
    printf("Name: %s | Roll: %d | Marks: %d\n",
           s->name, s->roll, s->marks);

    // free memory
    free(s);

    return 0;
}
