#include<stdio.h>

int isPerfect(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++)
        if(n%i==0) sum+=i;
    return sum==n?1:0;
}

void main(){
    int n=1000;
    
    for(int i=1;i<=n;i++){
        if(isPerfect(i))
            printf("%d ",i);
    }
}