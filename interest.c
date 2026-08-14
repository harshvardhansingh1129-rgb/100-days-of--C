#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, SI, CI, amount;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    // Simple Interest
    SI = (principal * rate * time) / 100;

    // Compound Interest
    amount = principal * pow((1 + rate / 100), time);
    CI = amount - principal;

    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f", CI);

    return 0;
}