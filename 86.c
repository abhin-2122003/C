// Write a program to find LCM & GCD of 2 numbers

#include <stdio.h>

void main(){

    int a,b;
    printf("\nEnter two number : ");
    scanf("%d%d",&a,&b);

    int lcm = (a>b) ? a : b;
    

    while((lcm%a !=0) || (lcm%b !=0)){
        lcm++;
    }
    int gcd  = (a*b)/lcm;

    printf("\nLcm : %d",lcm);
    printf("\nGcd : %d",gcd);
}