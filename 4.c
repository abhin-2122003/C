//  Write a C program to find the area & perimeter of a circle

#include<stdio.h>
#define pi 3.14

void main(){

    float r ;

    printf("\nEnter the value for radius of the  circle : ");
    scanf("%f",&r);

    printf("\nArea of the circle : %.2f \nPerimeter of the circle : %.2f\n\n", (pi*r*r),(pi*2*r));
}