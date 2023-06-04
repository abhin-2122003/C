//  Write a program to determine the grade of a student with all validations. Given marks of 3 subjects 

#include <stdio.h>

void main(){

    float a,b,c;
    printf("\nEnter the marks of the student - ");

    printf("\nSUB 1 : ");
    scanf("%f",&a);
    printf("\nSUB 2 : ");
    scanf("%f",&b);
    printf("\nSUB 3 : ");
    scanf("%f",&c);

    if(a<30 || b<30 || c<30){
        printf("\nE Grade , Failed");
    }else if(a>30 && b>30 && c>30){
        printf("\nD Grade\n");
    }else if(a>40 && b >40 && c>40){
        printf("\nC Grade\n");
    }else if(a>50 && b>50 && c>50){
        printf("\nB Grade");
    }else if(a == 80 && b ==80 && c ==80){
        printf("\nA Grade , Full Marks");
    }else{
        printf("\nInvalid Mark entry");
    }
}
