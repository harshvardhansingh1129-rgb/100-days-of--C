#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int first = -1, last = -1;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    // Find first and last occurrence
    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    if(first == -1)
    {
        printf("Target not found.\n");
        printf("-1, -1\n");
    }
    else
    {
        printf("First occurrence of %d is at index %d\n", target, first);
        printf("Last occurrence of %d is at index %d\n", target, last);
        printf("Output: %d, %d\n", first, last);
    }

    return 0;
}