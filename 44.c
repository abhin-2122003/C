// . Write a program to generate Prime numbers between two limits.

#include<stdio.h>

void main(){

    int l,u,i,n,f,r; 
    printf("\nEnter the Lower-limit : ");
    scanf("%d",&l);
    printf("\nEnter the Upper-limit : ");
    scanf("%d",&u);
   
    
    if(l<u){
        printf("\nPrime numbers are :- \n");
        for(n=l;n<=u;n++){
            for(f=0,i=2;i<=(n/2);i++){
                r = n%i;
                if(r ==0 ){
                    f++;
                }
            }
            if(f==0){
                printf("%d\n",n);
            }
        }
    }else{
        printf("\nInvalid input");
    }

}