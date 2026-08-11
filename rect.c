//write a program to calculate the area and perimeter of a rectangle given its length and breath.
#include<stdio.h>
#include<stdlib.h>
int main()
    {
    int length,breadth;
    printf("enter the length\n");
    scanf("%d",&length);
    printf("enter the breath'\n");
    scanf("%d",&breadth);
    printf("area of rectangle=%d\n",length*breadth);//area of rectangle

    printf("perimeter of rectangle=%d\n",2*(length+breadth));//perimeter of rectangle
return 0;
}