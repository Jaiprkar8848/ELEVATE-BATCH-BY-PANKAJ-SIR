// Perfect number -> number is perfect if the sum of all its factors excluding itself is equal to its own.
// 10-> 1,2,5 -> not perfect
// 28-> 1,2,4,7,14 -> perfect

#include<stdio.h>

int isPerfect(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            sum=sum+i;
    }
    return (sum==n)?1:0;
}

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int flag=isPerfect(n);

    if(flag==1)
        printf("The number %d is perfect",n);
    else
        printf("The number %d is not perfect",n);
}