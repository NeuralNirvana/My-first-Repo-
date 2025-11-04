
//Q67 (Arrays (1D))
//Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, pos, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // one extra space for the new element
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &num);

    // Shift elements to the right from position
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[pos] = num;

    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
