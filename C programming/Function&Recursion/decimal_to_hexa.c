#include<stdio.h>

void getHex(int n){
    if(n==0)
        return;
    getHex(n/16);
    if(n%16<=9)
        printf("%d",n%16);
    else
        printf("%c",(n%16)+55);
}

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    getHex(n);
}