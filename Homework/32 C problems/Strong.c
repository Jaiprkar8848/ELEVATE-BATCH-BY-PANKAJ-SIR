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
    return temp==sum?1:0;
}

void main(){
    int n;
    scanf("%d",&n);

    if(isStrong(n))
        printf("%d is strong",n);
    else
        printf("%d is not strong",n);
}