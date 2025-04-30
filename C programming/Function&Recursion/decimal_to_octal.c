#include<stdio.h>

void getOctal(int n){
    if(n==0)
        return;
    getOctal(n/8);
    printf("%d",n%8);
}

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    getOctal(n);
}