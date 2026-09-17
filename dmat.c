#include <stdio.h>

int main()
{
    int a[100][100];
    int r, c, i, j;
    int distinct = 1;

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

    // Check if diagonal elements are distinct
    for (i = 0; i < r; i++)
    {
        for (j = i + 1; j < r; j++)
        {
            if (a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0)
        {
            break;
        }
    }

    if (distinct == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}