// 145 -> 1!+4!+5!
// 2 -> 2!

#include<stdio.h>

int fact(int n){
    int prod=1;
    for(int i=1;i<=n;i++)
        prod=prod*i;
    return prod;
}

int isStrong(int n){
    int a=n;
    int last,sum=0;
    while(n!=0){
        last=n%10;
        sum=sum+fact(last);
        n/=10;
    }
    return (sum==a)?1:0;
}

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int flag=isStrong(n);

    if(flag==1)
        printf("The number %d is strong",n);
    else
        printf("The number %d is not strong",n);
}