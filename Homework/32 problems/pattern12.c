/*
   1
  22
 333
4444
*/


#include<stdio.h>

void main(){
    int n=4;
    int row,col,spaces;

    for(row=1;row<=n;row++){
        spaces=n-row;
        for(col=1;col<=spaces;col++)
            printf(" ");
        for(col=1;col<=row;col++)
            printf("%d",row);
        printf("\n");
    }
}