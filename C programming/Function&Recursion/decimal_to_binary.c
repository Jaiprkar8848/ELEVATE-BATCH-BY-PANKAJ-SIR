#include<stdio.h>

void getBinary(int n){
    if(n==0)
        return;
    getBinary(n/2);
    printf("%d",n%2);
}

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    getBinary(n);
}