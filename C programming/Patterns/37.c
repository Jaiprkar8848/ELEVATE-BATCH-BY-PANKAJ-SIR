/*
1*2*3*4*17*18*19*20
  5*6*7*14*15*16
    8*9*12*13
      10*11
*/

#include<stdio.h>
void main(){
    int n=4;
    int row,col,spaces;
    int x=1,y=n*n+1;
    for(row=1;row<=n;row++){
        spaces=2*(row-1);
        for(col=1;col<=spaces;col++)
            printf(" ");
        for(col=1;col<=n-row+1;col++)
            printf("%d*",x++);
        for(col=1;col<=n-row+1;col++)
            col!=(n-row+1)?printf("%d*",y++):printf("%d",y);
        y=y-2*(n-row);
        printf("\n");
    }
}