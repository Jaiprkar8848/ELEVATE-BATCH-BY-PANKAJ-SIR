/*
1
1 2
1 2 3
1 2 3 4
*/

#include<stdio.h>

void main(){
    int n=4;
    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++)
            printf("%d ",col);
        printf("\n");
    }
    
}