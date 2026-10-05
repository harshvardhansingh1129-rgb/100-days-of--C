#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find previous greater element using brute force
    for (int i = 0; i < n; i++) {
        int previousGreater = -1;

        // Start from the nearest element on the left
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previousGreater = arr[j];
                break;  // nearest greater element found
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", previousGreater);
    }

    return 0;
}