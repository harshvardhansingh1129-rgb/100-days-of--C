#include <stdio.h>

int main()
{
    int arr[100], n, x;
    int low, high, mid, result = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    low = 0;
    high = n - 1;

    // Binary search for the first element >= x
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] >= x)
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Index of ceil of %d: %d\n", x, result);

    return 0;
}