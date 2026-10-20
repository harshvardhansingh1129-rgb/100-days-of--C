#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum = sum + nums[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    printf("%d", missing);

    return 0;
}