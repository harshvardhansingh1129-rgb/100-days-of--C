#include <stdio.h>

int main() {
    int n, i, j, count;
    int majority = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Check each element
    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        // Must appear strictly more than n/2 times
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("Majority Element: %d", majority);

    return 0;
}