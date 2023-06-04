// 20.Write a program to determine the position of uppercase or lowercase character
//changed to
// Write a program to determine the position of uppercase and lowercase character

#include <stdio.h>
#include <string.h>

void main(){

    char text[500];
    printf("\nEnter the text : ");
    fgets(text,500,stdin);

    int Upos[500];
    int Lpos[500];

    int p=0 , q=0;
    for(int i=0;i<strlen(text);i++){

        if(text[i] >= 'A' && text[i] <= 'Z'){

            Upos[p] = i;
            p++;
        }

        if(text[i]>='a' && text[i] <= 'z'){
            Lpos[q] = i;
            q++;
        }
    }


    printf("\nPositon of UpperCase characters are : ");

    for(int i=0;i<p;i++){
        printf("%d",Upos[i]);
        if(i<p-1){
            printf(",");
        }
    }
    printf("\nPositon of LowerCase characters are : ");
    for(int i=0;i<q;i++){
        printf("%d",Lpos[i]);
        if(i<q-1){
            printf(",");
        }
    }
}