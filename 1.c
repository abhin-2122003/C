// Write a C program for find the average of 3 numbers

#include<stdio.h>

void main(){
    float a , b , c;
    printf("\nEnter 3 numbers : ");
    scanf("%f%f%f",&a,&b,&c);

    float avg =(a+b+c)/3;

    printf("\nAverage : %.2f",avg);

}
