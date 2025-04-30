// Given a number replace every occurence of 0 to 9

#include<stdio.h>

void main(){
    int n=200489;

    int place=1,ans=0,digit;
    while(n!=0){
        digit=n%10;
        if(digit==0) digit=9;
        ans=ans+digit*place;
        place*=10;
        n/=10;
    }
    printf("%d",ans);
}