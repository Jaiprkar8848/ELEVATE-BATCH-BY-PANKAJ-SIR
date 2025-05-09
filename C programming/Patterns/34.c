/*
1
11
101
1001
11111
*/

#include<stdio.h>

void main(){
    int n=5;

    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            if(row==1 || row==n || col==1 || col==row)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}