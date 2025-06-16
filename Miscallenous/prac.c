#include<stdio.h>

int reverse(int n){
    int reversed=0;
    while(n!=0){
        reversed=reversed*10+n%10;
        n/=10;
    }
    return reversed;
}

void main(){
    int n=12345;
    n=reverse(n);
    printf("%d",n);
}