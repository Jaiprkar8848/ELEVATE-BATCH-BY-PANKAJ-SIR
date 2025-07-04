#include<stdio.h>
#include<string.h>

int main(){
    int r=0,i,j,k;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            for(k=1;k<=j;k++){
                printf("%d %d\n",i<<k,j>>k);
                r^=(i<<k)|(j>>k);
            }
        }
    }
    printf("%d",r);
}