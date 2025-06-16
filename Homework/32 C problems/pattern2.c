/*
1
2 3
4 5 6
7 8 9 10*/

#include<stdio.h>

int main(){
    int n=4;
    
    int row,col;
    int cnt=1;
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ",cnt);
            cnt++;
        }
        printf("\n");
    }
}
