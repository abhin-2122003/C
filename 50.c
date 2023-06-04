// Write a program to find the sum of the series
// S= X-X3/3 !+X5/5!-X7/7 !.......

#include<stdio.h>

void main(){

    float x ; int n;
    printf("\nEnter the values for x and n : ");
    scanf("%f%d",&x,&n);

    x = x*(3.14/180); //for accepting values in degree . it converts deg to rad;

    float num = x;
    float sum = x;
    float den = 1;

    for(int i=1;i<n;i++){

        num = -num*x*x;
        den *= 2*i*(2*(i+1));
        sum += num / den;

    }

    printf("\nSum : %.2f",sum);

}