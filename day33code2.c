
//Q66 (Arrays (1D))
//Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

int main() {
    int n, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // one extra space for new element
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    int i, pos = n;
    // Find the correct position for insertion
    for (i = 0; i < n; i++) {
        if (arr[i] > num) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = num;

    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
