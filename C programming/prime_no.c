#include<stdio.h>

int isPrime(int n){
    if(n==0 || n==1) return 0;
    for(int i=2;i<n;i++)
        if(n%i==0) return 0;
    return 1; 
}
void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int flag=isPrime(n);
    if(flag==1)
        printf("The number %d is prime",n);
    else
        printf("The number %d is not prime",n);
}