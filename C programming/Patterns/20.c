/*

   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include<stdio.h>
void main(){
    int n,row,spaces,stars;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    // upper
    for(row=1;row<=n;row++){
        spaces=n-row;
        for(int j=1;j<=spaces;j++)
            printf(" ");
        
        stars=2*row-1;
        for(int k=1;k<=stars;k++)
            printf("*");
        
        printf("\n");
    }
    // lower
    for(row=1;row<n;row++){
        spaces=row;
        for(int j=1;j<=spaces;j++)
            printf(" ");
        
        stars=2*(n-row)-1;
        for(int k=1;k<=stars;k++)
            printf("*");
        
        printf("\n");
    }
}