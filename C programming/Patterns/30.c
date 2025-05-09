/*
n=4 s=3
3
44
555
6666
6666
555
44
3
*/

#include<stdio.h>

void main(){
    int n=4,s=3;

    // upper right angle triangle
    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d",s);
        }
        s++;
        printf("\n");
    }
    s-=1;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row+1;col++){
            printf("%d",s);
        }
        s--;
        printf("\n");
    }
}