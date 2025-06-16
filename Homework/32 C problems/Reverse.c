#include<stdio.h>

int reversed(int n){
    int rever=0;
    while(n!=0){
        rever=rever*10+n%10;
        n/=10;
    }
    return rever;
}

void main(){
    int n;
    scanf("%d",&n);

    printf("%d",reversed(n));
}