//  Write a program to determine the grade of a student with all validations. Given marks of 3 subjects 

#include <stdio.h>

void main(){

    float a,b,c;
    printf("\nEnter the marks of the student - ");

    printf("\nSUB 1(in 30) : ");
    scanf("%f",&a);
    printf("\nSUB 2(in 30) : ");
    scanf("%f",&b);
    printf("\nSUB 3(in 30) : ");
    scanf("%f",&c);

    float total = a+b+c;

    if(a>=10 || b>=10 || c>=10){
        if(total<20){
            printf("\nD Grade\n");
        }else if(total<30){
            printf("\nC Grade\n");
        }else if(total<50){
            printf("\nB Grade");
        }else if(total <70){
            printf("\nA Grade");
        }else if(total <90){
            printf("\nA+ Grade");
        }else{
            printf("\nInvalid Mark entry");
        }
    }else{
        printf("\nFailed ...!");
    }
}
