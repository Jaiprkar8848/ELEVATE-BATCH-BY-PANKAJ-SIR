#include<stdio.h>

void table(int n){
    for(int i=1;i<=10;i++)
        printf("%dx%d=%d\n",n,i,n*i);
}

void main(){
    int n;
    scanf("%d",&n);

    table(n);
}