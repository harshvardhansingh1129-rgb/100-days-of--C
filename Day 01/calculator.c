//write a program to input to numvber and display their sum, difference,product,and quotient.
#include<stdio.h>
int main(){
    int a,b,addition,multiplication,subtraction,division;
      printf("enter first number: ");
      scanf("%d",&a);
      printf("enter second number: ");
         scanf("%d",&b);
    addition=a+b;
    printf("addition=%d\n",addition);
    subtraction=a-b;
    printf("subtraction=%d\n",subtraction);
    multiplication=a*b;
    printf("multiplication=%d\n",multiplication);
    division=a/b;
    printf("division=%d\n",division);
    return 0;
}