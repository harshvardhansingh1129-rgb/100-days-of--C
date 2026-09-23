#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    printf("Name: Harsh\n");
    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter the character to find: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}