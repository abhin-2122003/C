//  Write a program to find the sum of the series
//  S= X+X2/2 !+X4/4!+X6/6 !+……….

#include<stdio.h>
#include<math.h>

int factorial(int n){
    int fact;
    if(n<=1){
        return 1;
    }else{
        fact = n*factorial(n-1);
    }
    return fact;
}

void main(){

    float x ; int n;

    printf("\nEnter the value for x and n : ");
    scanf("%f%d",&x,&n);

    float sum = x;
    float num;
    float den = 1;

    int factorial(int);

    for(int i =1 ;i<n;i++){

        num = pow(x,(2*i));
        den = factorial(2*i);
        sum += num/den;
    }


    printf("\n\nSum : %.2f\n\n",sum);

}

