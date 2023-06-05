//  Write a program to find the sum of the series
//  S= X+X2/2 !+X4/4!+X6/6 !+……….

#include<stdio.h>

void main(){

    float x ; int n;

    printf("\nEnter the value for x and n : ");
    scanf("%f%d",&x,&n);

    float sum = x;
    float num = x;
    float den = 1;

    for(int i =1 ;i<n;i++){

        num = num*x*x;
        den *= 2*i*(2*i+1);
        sum += num/den;
    }


    printf("\n\nSum : %.2f\n\n",sum);

}