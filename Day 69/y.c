// Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 0;

    int nums[n];
    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int repeated = -1;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                repeated = nums[i];
                break;
            }
        }
        if (repeated != -1) break;
    }

    if (repeated != -1) {
        printf("%d\n", repeated);
    }

    return 0;
}
