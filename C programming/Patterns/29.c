/*
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/

#include<stdio.h>

void main(){
    int n=7;

    int cnt=0;
    int row,col;

    int temp;
    for(row=1;row<=n;row++){
        if(row%2==1) temp=cnt+1;
        else temp=cnt+row;
        cnt+=row;
        if(row%2==1){
            for(col=1;col<=row;col++)
                row!=col?printf("%d*",temp++):printf("%d",temp++);
        }
        else{
            for(col=1;col<=row;col++)
                row!=col?printf("%d*",temp--):printf("%d",temp--);
        }
        printf("\n");
    }
}