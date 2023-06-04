//Positon of upperCase characters 

#include<stdio.h>
#include<string.h>

void main() {
    char a[500];
    printf("\nEnter the text: ");
    fgets(a, 500, stdin);

    int pos[500];
    int i, j;
    for (i = 0, j = 0; i < strlen(a); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            pos[j] = i;
            j++;
        }
    }

    printf("\nPosition of Uppercase characters are: ");
    for (i = 0; i < j; i++) {
        printf("%d", pos[i]);
        if (i != j - 1) {
            printf(",");
        }
    }
    printf("\n\n");
}
