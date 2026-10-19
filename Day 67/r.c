#include <stdio.h>

int main()
{
    int arr[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n = 10, k = 4;
    int i, j, temp;

    // Sort array in ascending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print kth smallest element
    printf("%d", arr[k - 1]);

    return 0;
}