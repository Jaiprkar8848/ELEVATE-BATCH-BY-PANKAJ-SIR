/*
1234
 234
  34
   4
*/

#include<stdio.h>

void main(){
    int n=4;
    int row,col,spaces;

    for(row=1;row<=n;row++){
        spaces=row-1;
        for(col=1;col<=spaces;col++)
            printf(" ");
        for(col=row;col<=n;col++)
            printf("%d",col);
        printf("\n");
    }
}