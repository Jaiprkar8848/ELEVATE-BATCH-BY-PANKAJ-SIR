/*

*******
*     *
*     *
*******

*/

#include<stdio.h>

void main(){
    int m,n,row,col;
    printf("Enter the length and breadth : ");
    scanf("%d%d",&m,&n);

    for(row=1;row<=m;row++){
        for(col=1;col<=n;col++){
            if(row==1 || col==1 || row==m || col==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}