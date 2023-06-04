//  Write a C program to convert a temperature given in Fahrenheit to degree Celsius

#include<stdio.h>

void main(){

    float f;
    printf("\nEnter the temperature in farenheit : ");
    scanf("%f",&f);

    float cel = (float) (f-32)/1.8;

    printf("%.2f F in celcius is : %.2f C \n",f,cel);
}