// . Write a program to check whether the given integer is Perfect number or not

#include<stdio.h>

void main(){

    printf("\nEnter the number to be checked: ");
    int n ;scanf("%d",&n);

    int sum = 0;

    for(int i=1;i<=(n/2);i++){
        int r = n%i;
        if(r == 0){
            sum += i;
        }
    }

    if(sum == n){
        printf("%d is a perfect number \n",n);
    }else{
        printf("%d is not a perfect number  \n",n);
    }
}