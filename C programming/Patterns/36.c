/*
1
2  4
3  6  9
4  8  12  16
5 10  15  20  25
*/

#include<stdio.h>
void main(){
    int n=5;
    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",row*col);
        }
        printf("\n");
    }
}
