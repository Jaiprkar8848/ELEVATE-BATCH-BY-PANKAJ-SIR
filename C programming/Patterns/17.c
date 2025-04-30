/*
*      *
**    **
***  ***
********
*/


#include<stdio.h>

void main(){
    int n,row,spaces,stars;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        stars=row;
        for(int i=1;i<=stars;i++)
            printf("*");
        
        spaces=2*(n-row);
        for(int k=1;k<=spaces;k++)
            printf(" ");

        stars=row;
        for(int j=1;j<=stars;j++)
            printf("*");

        printf("\n");
    }
}