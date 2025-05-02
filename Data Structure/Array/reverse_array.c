#include<stdio.h>

void reverse1(int A[],int n){
    int B[n];
    for(int i=0;i<n;i++)
        B[n-i-1]=A[i];
    
    // print B
    for(int i=0;i<n;i++)
        printf("%d ",B[i]);
    printf("\n");
}

void reverse2(int A[],int n){
    int start=0,end=n-1;
    int temp;
    while(start<end){
        temp=A[start];
        A[start]=A[end];
        A[end]=temp;
        start+=1;
        end-=1;
    }
}

void main(){
    int A[]={1,2,3,4,5,6};
    int n=6;

    reverse1(A,n);   // extra array
    reverse2(A,n);  // inplace
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
}