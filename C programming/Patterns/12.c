/*
1*
2*2*
3*3*3*
4*4*4*4*
5*5*5*5*5*
*/

#include<stdio.h>

void main(){
    int n,row,col;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++)
            printf("%d*",row);
        printf("\n");
    }
}