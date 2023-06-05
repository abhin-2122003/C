// Write a program to Sort an array using pointer
#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    printf("\nEnter the number of numbers required : ");
    scanf("%d",&n);

    int *ptr;
    ptr = (int *)malloc(sizeof(int)*n);

    printf("\nEnter the numbers : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",ptr+i);
    }

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i ; j < n ; j++){
            if(*(ptr + i) > *(ptr + j)){
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("\nSorted array is : ");
    for(int i = 0 ; i < n ; i++){
        printf("%d\t",*(ptr + i));
    }

    free(ptr);
}