#include <stdio.h>

int main()
{
    int a[100][100];
    int r, c, i, j;
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal elements
    for (i = 0; i < r; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}