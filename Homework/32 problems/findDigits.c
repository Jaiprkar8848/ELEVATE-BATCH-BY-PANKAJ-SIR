#include<stdio.h>

int countDigits(int n){
    int dig=0;
    while(n!=0){
        dig++;
        n/=10;
    }
    return dig;
}

void main(){
    int n;
    scanf("%d",&n);

    printf("%d",countDigits(n));
}