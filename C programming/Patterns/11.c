/*

*****
 *   *
  *   *
   *   *
    ***** 
*/

#include<stdio.h>

void main(){
    int n,row,col,spaces;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        spaces=row-1;
        for(int j=1;j<=spaces;j++)
            printf(" ");
        
        for(col=1;col<=n;col++){
            if(row==1 || col==1 || row==n || col==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}