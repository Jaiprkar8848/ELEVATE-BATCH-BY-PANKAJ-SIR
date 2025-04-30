/*

   1
  212
 32123
4321234

*/

#include<stdio.h>
void main(){
    int n,row,col,spaces,start;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        spaces=n-row;
        for(int j=1;j<=spaces;j++)
            printf(" ");
        
        start=row;
        for(col=1;col<=2*row-1;col++){
            printf("%d",start);
            col>=row?start++:start--;
        }
        printf("\n");
    }
}