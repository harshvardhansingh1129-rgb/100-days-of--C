#include <stdio.h>

int main()
{
    int r, c;
    int a[10][10];
    int symmetric = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (r != c)
    {
        symmetric = 0;
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (a[i][j] != a[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }

            if (symmetric == 0)
                break;
        }
    }

    if (symmetric == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}