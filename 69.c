#include<stdio.h>

int n,i;

void insertElem(int a[]){
    int p,x;
    printf("\nEnter the number to be inserted and its position\n");
    scanf("%d%d",&x,&p);


    for(i=n-1;i>=p;i--)
        a[i+1] = a[i];
    a[p]=x;

    printf("\nNew array after insertion\n");
    for(i=0;i<n+1;i++)
    printf("%d\t",a[i]);
}

int main()
{   void insertElem(int a[]);
    printf("\nEnter the size\n");
    scanf("%d",&n);

    int a[n];
    printf("\nElements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    insertElem(a);
}

