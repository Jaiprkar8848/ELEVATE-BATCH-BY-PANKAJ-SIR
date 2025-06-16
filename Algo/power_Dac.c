#include<stdio.h>

int power(int a,int n){
    if(n==1) return a;
    else{
        if(n%2==0)
            return power(a,n/2)*power(a,n/2);
        else
            return power(a,n/2)*power(a,n/2)*a;
    }
}

void main(){
    int a=3,n=5;

    printf("%d",power(a,n));
}