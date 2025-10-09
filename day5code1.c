#include <stdio.h>
#include <math.h>  // Required for the pow() function

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;

    // Taking input from the user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculating Compound Interest
    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    // Displaying results
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
