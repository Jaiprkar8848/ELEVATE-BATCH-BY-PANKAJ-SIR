/*
* * * * * * *
* * *   * * *
* *       * *
*           *
* *       * *
* * *   * * *
* * * * * * *

*/


#include<stdio.h>

void main(){
    int n=5;
    int row,col;
    int stars,spaces=1;
    // Printing first row
    for(col=1;col<=2*n-1;col++)
        printf("* ");
    printf("\n");
    // Printing next 2*n-3 rows
    for(row=1;row<=2*n-3;row++){
        stars=2*n-1-spaces;

        for(col=1;col<=stars/2;col++)
            printf("* ");
        for(col=1;col<=spaces;col++)
            printf("  ");
        for(col=1;col<=stars/2;col++)
            printf("* ");
        
        if(row<n-1) spaces+=2;
        else spaces-=2;
        printf("\n");
    }
    // printing last row
    for(col=1;col<=2*n-1;col++)
        printf("* ");
}