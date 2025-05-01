#include<stdio.h>

void tableOfn(int n){
    for(int i=1;i<=10;i++){
        printf("%dx%d=%d\n",n,i,n*i);
    }
    printf("\n");
}

void main(){
    int n=10;

    for(int i=1;i<=n;i++){
        tableOfn(i);
    }
}