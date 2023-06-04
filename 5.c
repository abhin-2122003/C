// Write a C program to find the volume of Cone

#include<stdio.h>
#define pi 3.14

void main(){

    float r , h;

    printf("\nEnter the value for radius and height of the cone : ");
    scanf("%f%f",&r,&h);

    

    if(h>r){
        if(h!=0 && r!=0){
            float v = (1.0/3.0)*pi*r*r*h;
            printf("\nVolume of the cone is : %.2f",v);
        }else{
            printf("\nHeight and Radius of the cone cant be zero.");
        }
    }else{
        printf("\nHeight must be greater than radius.");
    }

}