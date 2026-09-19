#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal: ");

    // Starting points of diagonals
    for (int k = 0; k < r + c - 1; k++)
    {
        int row, col;

        if (k < c)
        {
            row = 0;
            col = k;
        }
        else
        {
            row = k - c + 1;
            col = c - 1;
        }

        while (row < r && col >= 0)
        {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}