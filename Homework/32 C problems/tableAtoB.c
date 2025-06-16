#include<stdio.h>

void table(int n){
    for(int i=1;i<=10;i++)
        printf("%dx%d=%d\n",n,i,n*i);
    printf("\n");
}

void main(){
    int a=5,b=9;

    for(int i=a;i<=b;i++)
        table(i);
}