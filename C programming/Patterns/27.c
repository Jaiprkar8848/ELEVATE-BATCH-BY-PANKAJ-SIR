/*
1 10 11 20 21
2 9  12 19 22
3 8  13 18 23
4 7  14 17 24
5 6  15 16 25
*/

#include<stdio.h>

void main(){
    int n=7;
    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(col%2==1)
                printf("%d ",(n*col)-(n-row));
            else
                printf("%d ",(n*col)-(row-1));
        }
        printf("\n");
    }
}