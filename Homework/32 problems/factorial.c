#include<stdio.h>

int fact(int n){
    int ans=1;
    for(int i=2;i<=n;i++)
        ans=ans*i;
    return ans;
}

void main(){
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
}