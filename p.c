#include <stdio.h>

int main() {
    int nums[100], n, i, j;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Output: [");

    for (i = 0; i < n; i++) {
        int product = 1;

        for (j = 0; j < n; j++) {
            if (i != j) {
                product = product * nums[j];
            }
        }

        printf("%d", product);

        if (i < n - 1) {
            printf(",");
        }
    }

    printf("]\n");

    return 0;
}