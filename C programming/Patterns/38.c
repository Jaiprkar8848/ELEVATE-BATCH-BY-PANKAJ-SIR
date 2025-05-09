/*
n=3
333
313
323
333
*/

#include<stdio.h>

void main(){
    int n=3;
    int row,col;
    int temp=1;
    for(row=1;row<=n+1;row++){
        for(col=1;col<=n;col++){
            if(row==1 || row==n+1 || col==1 || col==n)
                printf("%d",n);
            else
                printf("%d",temp++);
        }
        printf("\n");
    }
}