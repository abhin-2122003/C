//  Write a C program to find the area of a triangle A = √(s * (s - a) * (s - b) * (s - c)) | s = a+b+c/2

#include<stdio.h>
#include<math.h>

void main(){

    float a,b,c;

    printf("\nEnter the three sides of the triangle : ");
    scanf("%f%f%f",&a,&b,&c);

    if(a > 0 && b > 0 && c > 0){

        if((a+b)>c || (b+c)>a || (a+c)>b){

        float S = ((a+b+c)/2.0);
        float A = ((float) sqrt(S*(S-a)*(S-b)*(S-c)));

        printf("\nArea of the triangle is : %.2f cm2",A);

        }else{
            printf("\nArea cant be calculated .");
        }
    }else{
        printf("\nInvalid sides");
    }
    
}