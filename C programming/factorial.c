#include<stdio.h>

int factorial(int n){
    int prod=1;
    for(int i=1;i<=n;i++){
        prod=prod*i;
    }
    return prod;
}

void main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("The factorial of %d is %d",n,fact);
}