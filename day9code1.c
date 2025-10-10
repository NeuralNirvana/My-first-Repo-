#include <stdio.h>
#include <math.h>  // for sqrt() function

int main() {
    float a, b, c;          // coefficients of the equation
    float d;                // discriminant
    float root1, root2;     // roots

    // Step 1: Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Step 2: Check if it's a quadratic equation
    if (a == 0) {
        printf("Not a quadratic equation. 'a' cannot be zero.\n");
    } 
    else {
        // Step 3: Calculate discriminant
        d = b * b - 4 * a * c;

        // Step 4: Check the nature of roots
        if (d > 0) {
            // Real and distinct roots
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);
            printf("\nRoots are real and distinct.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        } 
        else if (d == 0) {
            // Real and equal roots
            root1 = root2 = -b / (2 * a);
            printf("\nRoots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
        } 
        else {
            // Complex roots
            float realPart = -b / (2 * a);
            float imagPart = sqrt(-d) / (2 * a);
            printf("\nRoots are complex and imaginary.\n");
            printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
            printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
        }
    }

    return 0;
}
