/*
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1
*/

#include<stdio.h>

void main(){
    int n=4;

    int row,col;
    // upper part
    int cnt=1;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++)
            row!=col?printf("%d*",cnt++):printf("%d",cnt++);
        printf("\n");
    }
    int temp;
    for(row=1;row<=n;row++){
        cnt-=(n-row+1);
        temp=cnt;
        for(col=1;col<=n-row+1;col++)
            col!=(n-row+1)?printf("%d*",temp++):printf("%d",temp);
        printf("\n");
    }

}