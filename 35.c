// . Write a C program to reverse of an integer

#include<stdio.h>

void main(){

    printf("\nEnter the number to be reversed : ");
    int n;
    scanf("%d",&n);
    int num = 0,r;

    while(n!=0){
        r = n%10;
        num =(num * 10) + r;
        n = n/10;
    }

    printf("\nReversed number : %d",num);
}