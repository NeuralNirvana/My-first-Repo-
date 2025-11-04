
// Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Taking input from the user
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Calculating hours, minutes, and seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Displaying result in HH:MM:SS format
    printf("Time in HH:MM:SS format = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
