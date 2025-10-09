#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // Taking input from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculating area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Displaying results
    printf("\nArea of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}
