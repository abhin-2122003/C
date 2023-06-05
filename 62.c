// . Write a program to find the norm of a matrix
#include<stdio.h>
#include<math.h>

void main(){

    printf("\nEnter the order of the matrix : ");
    int r,c; scanf("%d%d",&r,&c);

    printf("\nEnter the elements of the matrix : ");
    int matrix[r][c]; int sum=0;
    for(int i= 0 ; i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
            sum += (matrix[i][j] * matrix[i][j]);
        }
    }

    float norm = sqrt(sum);
    printf("\nNorm of the matrix is : %.2f",norm);
}