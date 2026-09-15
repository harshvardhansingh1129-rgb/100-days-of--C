#include <stdio.h>

int main() {
    int n, i, element, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position
    pos = 0;
    while (pos < n && arr[pos] < element) {
        pos++;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;

    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}