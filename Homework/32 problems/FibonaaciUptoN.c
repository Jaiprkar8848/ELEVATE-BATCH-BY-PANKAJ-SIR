#include<stdio.h>

void fibonaaci(int n){
    int a=0;
    int b=1;
    int temp;
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++){
        temp=a+b;
        printf("%d ",temp);
        a=b;
        b=temp;
    }
}

void main(){
    int n;
    scanf("%d",&n);

    fibonaaci(n);
}