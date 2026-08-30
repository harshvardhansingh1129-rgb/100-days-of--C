#include <stdio.h>

int main() {
    int n, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    digits = 0;
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    power = 1;
    for (int i = 1; i < digits; i++) {
        power *= 10;
    }

    first = n / power;
    middle = n % power;
    middle = middle / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}