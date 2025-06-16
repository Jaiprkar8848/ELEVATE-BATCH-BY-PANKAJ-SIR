/*
*
**
***
****
*/

#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    
    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++)
            printf("*");
        printf("\n");
    }
}