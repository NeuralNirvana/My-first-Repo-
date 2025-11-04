

//Q24 Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
// 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit


#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input the number of units consumed
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on slabs
    if (units <= 0) {
        printf("Invalid input! Units must be positive.\n");
    }
    else if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Display the final bill amount
    if (units > 0)
        printf("Total Electricity Bill = ₹%.2f\n", bill);

    return 0;
}
