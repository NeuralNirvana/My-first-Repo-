
//Q68 (Arrays (1D))
//Delete an element from an array.



#include <stdio.h>

int main() {
    int n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // Shift elements to the left to remove the element at 'pos'
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion: ");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
