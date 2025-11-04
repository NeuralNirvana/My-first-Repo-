
//Q70 (Arrays (1D))
//Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of rotations): ");
    scanf("%d", &k);

    k = k % n; // In case k > n

    int rotated[n];
    int index = 0;

    // Copy last k elements first
    for (int i = n - k; i < n; i++) {
        rotated[index++] = arr[i];
    }

    // Copy remaining elements
    for (int i = 0; i < n - k; i++) {
        rotated[index++] = arr[i];
    }

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
