#include <stdio.h>

int main() {
    int arr[100], n, k, i, j;
    int sum, maxSum;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 0;
    }

    maxSum = arr[0];

    for (i = 0; i <= n - k; i++) {
        sum = 0;

        for (j = i; j < i + k; j++) {
            sum = sum + arr[j];
        }

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum: %d\n", maxSum);

    return 0;
}