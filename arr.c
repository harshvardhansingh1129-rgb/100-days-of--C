#include <stdio.h>

int main() {
    int a[10][10], sum[10];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of each row
    for (i = 0; i < r; i++) {
        sum[i] = 0;

        for (j = 0; j < c; j++) {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row: ");

    for (i = 0; i < r; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}