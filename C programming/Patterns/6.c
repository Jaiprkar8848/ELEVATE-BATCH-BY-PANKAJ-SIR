/*
*****
 ****
  ***
   **
    *
*/

#include<stdio.h>

void main(){
    int n,row,spaces,stars;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        spaces=row-1;
        for(int j=1;j<=spaces;j++)
            printf(" ");
        
        stars=n+1-row;
        for(int k=1;k<=stars;k++)
            printf("*");
        
        printf("\n");
    }
}