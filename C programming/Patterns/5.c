/*
A
BC
DEF
GHIJ
KLMNO
*/

#include<stdio.h>

void main(){
    int n,row,col;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    char ch='A';
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}