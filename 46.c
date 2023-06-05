// Write a program to find the count of positive numbers using continue
#include<stdio.h>

void main(){

    printf("\nHow many numbers want to enter : ");
    int n; scanf("%d",&n);

    int a[n],count=0;
    printf("\nEnter the numbers : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<0)
            continue;
        count++;
    }

    printf("\nCount of positive numbers is : %d\n\n",count);
}