#include<stdio.h>

int countDigit(int n){
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
    int digits=countDigit(n);
    int temp=n;
    int sum=0;
    while(n!=0){
        sum+=powerxy(n%10,digits);
        n/=10;
    }  
    return sum==temp?1:0;
}

void main(){
    int n;
    scanf("%d",&n);

    if(isArmstrong(n))
        printf("%d is Armstrong",n);
    else
        printf("%d is not Armstrong",n);
}