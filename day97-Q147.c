//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    int salary;
};

int main() {

    struct Employee e, e2;
    FILE *fp;

    // ---- WRITE TO BINARY FILE ----
    fp = fopen("employee.dat", "wb"); // write binary
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 0;
    }

    // Input employee data
    printf("Enter name: ");
    scanf("%s", e.name);

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%d", &e.salary);

    // Write structure to file
    fwrite(&e, sizeof(e), 1, fp);

    fclose(fp);

    // ---- READ FROM BINARY FILE ----
    fp = fopen("employee.dat", "rb"); // read binary
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 0;
    }

    // Read structure from file
    fread(&e2, sizeof(e2), 1, fp);

    fclose(fp);

    // ---- DISPLAY DATA ----
    printf("\nData read from file:\n");
    printf("Name: %s | ID: %d | Salary: %d\n", e2.name, e2.id, e2.salary);

    return 0;
}
