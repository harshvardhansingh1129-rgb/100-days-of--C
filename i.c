#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 4};
    int n = 4;

    for (int i = 0; i < n; i++) {
        int next = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }

        if (i > 0) {
            printf(", ");
        }

        printf("%d", next);
    }

    return 0;
}