//write a program to swap two numbers using third variables
#include<stdio.h>
int main(){
 printf("enter the two numbers\n");
 int a,b,temp;
 scanf("%d%d",&a,&b);
 printf("before swapping a=%d b=%d\n",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("after swapping a=%d b=%d\n",a,b);
 return 0 ;   
}