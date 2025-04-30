#include<stdio.h>

void print_table(int n){
    for(int i=1;i<=10;i++)
        printf("%dx%d=%d\n",n,i,n*i);
}

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    print_table(n);
}