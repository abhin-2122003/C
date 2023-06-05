//  Write a program to Insert an element into an array using function

#include<stdio.h>
void Insertelem(int a[],int e,int p ,int n);
void main(){
    
    printf("\nEnter the size for the array : ");
    int n; scanf("%d",&n);
    printf("\nEnter the elements for the array : ");
    int a[100];
    for(int i=0 ;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("\n\nArray is  : ");
    for(int i=0 ; i<n; i++){
        printf("%d",a[i]);

        if(i != n-1){
            printf(",");
        }
    }

    printf("\n\nEnter the element want to insert : ");
    int e; scanf("%d",&e);
    printf("\nEnter the position : ");
    int p; scanf("%d",&p);

    Insertelem(a,e,p,n+1);

    n = n+ 1;
    printf("\n\nArray after insertion is  : ");
    for(int i=0 ; i<n; i++){
        printf("%d",a[i]);

        if(i != n-1){
            printf(",");
        }
    }

    printf("\n\n\n");
}

void Insertelem(int a[],int e, int p , int n){

    for(int i=n ; i>=p ; i--){
        a[i] = a[i-1];
    }

    a[p-1] =e;
    
}