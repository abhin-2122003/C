//  Write a C program to find the area & perimeter of a circle

#include<stdio.h>
#define pi 3.14

void main(){

    float r ;

    printf("\nEnter the value for radius of the  circle : ");
    scanf("%f",&r);

    float a = pi*r*r;
    float p = pi*2*r;

    printf("\nArea of the circle : %.2f \nPerimeter of the circle : %.2f\n\n", a,p);
}