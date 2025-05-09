/*
1
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3
2*2
1
*/

#include<stdio.h>

void main(){
    int n=4;

    int row,col;
    // upper part
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            row!=col?printf("%d*",row):printf("%d",row);
        }
        printf("\n");
    }
    // lower part
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row+1;col++){
            (n-row+1)!=col?printf("%d*",n-row+1):printf("%d",n-row+1);
        }
        printf("\n");
    }
}