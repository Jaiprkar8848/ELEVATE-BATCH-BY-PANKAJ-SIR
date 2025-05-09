/*
1
22
333
4444
55555
4444
333
22
1
*/

#include<stdio.h>

void main(){
    int n=5;
    
    int row,col;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d",row);
        }
        printf("\n");
    }
    for(row=1;row<n;row++){
        for(col=1;col<=n-row;col++){
            printf("%d",n-row);
        }
        printf("\n");
    }
}