/*

* * * * *
*       *
*   *   *
*       *
* * * * *
*/

#include<stdio.h>

void main(){
    int n=3,i,j;
    for(i=1;i<2*n;i++){
        for(j=1;j<2*n;j++){
            if(i%2!=0 || j%2!=0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}