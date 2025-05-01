/*
1 1 1 1
2 2 2
3 3 
4
*/

#include<stdio.h>

void main(){
    int n=4;
    
    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=n+1-row;col++)
            printf("%d ",row);
        printf("\n");
    }
}