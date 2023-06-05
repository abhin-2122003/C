// Write a program to find number of words in a line of text

#include<stdio.h>
#include<string.h>


void main(){

    char text[100];
    printf("\nEnter the text : ");
    fgets(text,sizeof(text),stdin);

    int isSpace = 1;
    int Wordcount = 0;

    for(int i=0 ;text[i] != '\0';i++){

        if(text[i] == ' '){
            isSpace = 1;
        }else{

            if(isSpace == 1){

                Wordcount++;
                isSpace = 0;
            }

        }

    }

    printf("\nNo of words in this text : %d\n\n",Wordcount);
}