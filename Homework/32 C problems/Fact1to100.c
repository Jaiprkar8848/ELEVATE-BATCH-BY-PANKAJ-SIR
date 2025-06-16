#include<stdio.h>

unsigned long long int fact(int n){
    unsigned long long int ans=1;
    for(int i=2;i<=n;i++)
        ans=ans*i;
    return ans;
}

void main(){
    int n=50;

    for(int i=1;i<=n;i++){
        printf("%d!=%llu\n",i,fact(i));
    }
}