#include<stdio.h>

int powerxy(int x,int y){
    int ans=1;
    for(int i=1;i<=y;i++)
        ans=ans*x;
    return ans;
}

void main(){
    int x,y;
    scanf("%d %d",&x,&y);

    printf("%d",powerxy(x,y));
}