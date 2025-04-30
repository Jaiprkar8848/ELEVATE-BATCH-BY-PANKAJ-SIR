// Reverse a Number

#include<stdio.h>

void main(){
    int n;
    scanf("%d",&n);

    int rev=0,digit;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    printf("%d",rev);
}