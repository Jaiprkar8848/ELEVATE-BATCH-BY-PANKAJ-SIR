/*
1
12
123
1234
12345
*/

#include<stdio.h>

void main(){
    int n,row,col;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++)
            printf("%d",col);
        printf("\n");
    }
}


/*
Similar
1                   *                 
22                  **
333                 ***
4444                ****
55555               *****      
*/