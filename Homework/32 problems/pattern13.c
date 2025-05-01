/*
****
 ***
  **
   *
*/


#include<stdio.h>

void main(){
    int n=4;
    int row,col,spaces;
    for(row=1;row<=n;row++){
        spaces=row-1;
        for(col=1;col<=spaces;col++)
            printf(" ");
        for(col=1;col<=n+1-row;col++)
            printf("*");
        printf("\n");
    }
}