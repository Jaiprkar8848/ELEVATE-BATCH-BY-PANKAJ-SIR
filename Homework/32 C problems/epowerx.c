#include<stdio.h>

int powerxy(int x,int y){
    int ans=1;
    for(int i=1;i<=y;i++)
        ans=ans*x;
    return ans;
}

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++)
        ans=ans*i;
    return ans;
}

float epowerx(int x,int n){
    float sum=0;
    for(int i=0;i<n;i++)
        sum+=powerxy(x,i)/(fact(i)*1.0);
    return sum;
}

void main(){
    int x,n;
    scanf("%d%d",&x,&n);

    printf("%f",epowerx(x,n));
}