#include <stdio.h>

int main()
{
    int n, i;
    int total = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        total = total + nums[i];
    }

    for(i = 0; i < n; i++)
    {
        // Right sum = total - left sum - current element
        int rightSum = total - leftSum - nums[i];

        if(leftSum == rightSum)
        {
            pivot = i;
            break;   // gives the leftmost pivot index
        }

        leftSum = leftSum + nums[i];
    }

    printf("Pivot index = %d\n", pivot);

    return 0;
}