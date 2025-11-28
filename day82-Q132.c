//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>
#include <string.h>

// Define enum for traffic lights
enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    char input[10];
    enum TrafficLight light;

    // Input traffic light color
    printf("Enter traffic light (RED / YELLOW / GREEN): ");
    scanf("%s", input);

    // Convert input to enum value
    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid input!\n");
        return 0;
    }

    // Print action based on enum value
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
