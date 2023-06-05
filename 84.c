// Write a program to merge 2 arrays into sorted array
#include<stdio.h>

int call = 0;
struct arrays{
    int n;
    int data[100];
}a,b,c;
void readArray(struct arrays *x){
    call++;
    printf("\nEnter the size of the array %d : ",call);
    scanf("%d",&(x->n));
    printf("\nEnter the elements of the arrray %d : ",call);
    for(int i=0 ;i<x->n;i++){
        scanf("%d",&(x->data[i]));
    }
}
void mergeArray(){
    c.n = a.n + b.n;
    int i;
    for(i=0;i<a.n;i++){
        c.data[i] = a.data[i];
    }
    for(int j=0;j<b.n;j++){
        c.data[i] = b.data[j];
        i++;
    }
}
void sortArray(){
    for(int i =0 ;i<c.n-1; i++){
        for(int j=i+1;j<c.n;j++){
           if(c.data[i] > c.data[j]){

                int temp = c.data[i];
                c.data[i] = c.data[j];
                c.data[j] = temp;
           }
        }
    }
}

void printArray(struct arrays *y){
    for(int i=0 ;i<y->n;i++){
        printf("%d\t",y->data[i]);
    }
}
void main(){
    readArray(&a);
    readArray(&b);

    printf("\nArray 1 : ");
    printArray(&a);
    printf("\nArray 2 : ");
    printArray(&b);

    mergeArray();
    sortArray();

    printf("\nSorted array : ");
    printArray(&c);
}