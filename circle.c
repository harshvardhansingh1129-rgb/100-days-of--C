//write a program to calculate  the  area and circumference of a circle given its radius 
#include<stdio.h>
int main(){
    float radius,area,circumference;
    printf("enter the radius of circle\n");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("area of cicle=%f\n",area);//area of circle 
    printf("circumference of circle =%f\n",circumference);//circumference of circle
    return 0 ;
}