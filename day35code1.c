
//Q69 (Arrays (1D))
//Find the second largest element in an array.


#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = arr[0], second = -1e9; // assuming elements are not less than -1e9

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -1e9)
        printf("No second largest element\n");
    else
        printf("%d\n", second);

    return 0;
}
