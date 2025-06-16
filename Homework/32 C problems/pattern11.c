/*
   4
  34
 234
1234
*/

#include<stdio.h>

void main(){
    int n=4;
    int row,col,spaces;
    for(row=1;row<=n;row++){
        spaces=n-row;
        for(col=1;col<=spaces;col++)
            printf(" ");
        for( ;col<=n;col++)
            printf("%d",col);
        printf("\n");
    }
}