// write a program to find and display the sum of first n natural numbers. 
#include<stdio.h>
int main() {
    int n, sum;
    printf("enter the number:");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("sum of first %d natural numbers=%d",n,sum);
    return 0; 
    }