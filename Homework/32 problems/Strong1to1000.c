#include<stdio.h>

int fact(int n){
    int ans=1;
    for(int i=2;i<=n;i++)
        ans=ans*i;
    return ans;
}

int isStrong(int n){
    int sum=0;
    int temp=n;
    while(n!=0){
        sum+=fact(n%10);
        n/=10;
    }
    return sum==temp?1:0;
}

void main(){
    int n=1000;

    for(int i=1;i<=n;i++){
        if(isStrong(i))
            printf("%d ",i);
    }
}