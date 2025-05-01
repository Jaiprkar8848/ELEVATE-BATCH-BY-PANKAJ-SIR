/*
   1
  23
 456
78910
*/


#include<stdio.h>

void main(){
    int n=4;
    int row,col,spaces,cnt=1;
    for(row=1;row<=n;row++){
        spaces=n-row;
        for(col=1;col<=spaces;col++)
            printf("  ");
        for(col=1;col<=row;col++){
            printf("%d ",cnt);
            cnt++;
        }
        printf("\n");
    }
}