// Binary to decimal

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int place=1,bit,ans=0;
    while(n!=0){
        bit=n%2;
        ans+=bit*place;
        place*=2;
        n/=10;
    }
    printf("%d",ans);
}