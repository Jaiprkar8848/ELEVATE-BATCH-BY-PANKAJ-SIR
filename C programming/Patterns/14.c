/*
1
01
101
0101
10101
*/
#include<stdio.h>

void main(){
    int n,row,col;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            if((row+col)%2==0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}