//write a programm to convert temperature from celcius to fahrenheit
#include<stdio.h>
int main(){
float celcius, fahrenheit;
printf("enter the temperature in celcius:\n");
scanf("%f",&celcius);
fahrenheit=(celcius*9/5)+32;
printf("temperature in fahrenheit=%f\n",fahrenheit);
return 0 ;
}