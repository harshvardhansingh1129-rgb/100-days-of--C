#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements: ");

    for (i = 0; i < n; i++) {
        int nextGreater = -1;

        // Check elements to the right
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;   // nearest greater element found
            }
        }

        if (i > 0) {
            printf(", ");
        }
        printf("%d", nextGreater);
    }

    return 0;
}