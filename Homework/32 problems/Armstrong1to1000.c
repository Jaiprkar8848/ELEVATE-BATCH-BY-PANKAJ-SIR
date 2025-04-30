#include<stdio.h>

int countDigits(int n){
    int cnt=0;
    while(n!=0){
        cnt++;
        n/=10;
    }
    return cnt;
}

int powerxy(int x,int y){
    int ans=1;
    for(int i=1;i<=y;i++)
        ans=ans*x;
    return ans;
}

int isArmstrong(int n){
    int digits=countDigits(n);
    int sum=0;
    int temp=n;
    while(n!=0){
        sum+=powerxy(n%10,digits);
        n/=10;
    }
    return sum==temp?1:0;
}

void main(){
    int n=1000;

    for(int i=1;i<=n;i++){
        if(isArmstrong(i))
            printf("%d ",i);
    }
}