// Write a C program to find the volume of a cylinder (pi r^2 h)

#include<stdio.h>
#define pi 3.14

void main(){

    float r ,h ;

    printf("\nEnter the radius and height of the cylinder : ");
    scanf("%f%f",&r,&h);

    if(h > r){

        if(h!=0 && r!=0){
            printf("\nVolume of the cylinder : %.2f",(pi*r*r*h));
        }else{
            printf("\nRadius and height cant be zero .");
        }
    }else{
        printf("\nHeight Must be greater than radius .");
    }

    
}