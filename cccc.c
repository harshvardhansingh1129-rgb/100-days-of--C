#include <stdio.h>

int main() {
    long long n, digit, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit == 0)
            result = result + 1 * place;
        else
            result = result + 0 * place;

        place = place * 10;
        n = n / 10;
    }

    printf("1's Complement = %lld", result);

    return 0;
}