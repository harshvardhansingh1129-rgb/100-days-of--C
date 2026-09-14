#include <stdio.h>

int main() {
    long long n;
    int digit, count, maxCount = 0, maxDigit = 0;
    int freq[10] = {0};

    printf("Enter an integer number: ");
    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        freq[0] = 1;

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    for (digit = 0; digit <= 9; digit++) {
        if (freq[digit] > maxCount) {
            maxCount = freq[digit];
            maxDigit = digit;
        }
    }

    printf("Digit that occurs most times: %d\n", maxDigit);

    return 0;
}