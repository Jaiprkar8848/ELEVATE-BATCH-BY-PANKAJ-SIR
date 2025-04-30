#include<stdio.h>
#define SIZE 10

void deleteAtEnd(int A[],int *n){
    *n-=1;
}

void deleteAtIdx(int A[],int *n,int idx){
    for(int i=idx;i<=*n-2;i++)
        A[i]=A[i+1];
    *n-=1;
}

void print(int A[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");
}

void main(){
    int A[SIZE]={10,20,30,40,60};
    int n=5;

    print(A,n);
    deleteAtEnd(A,&n);
    print(A,n);
    deleteAtIdx(A,&n,2);
    print(A,n);
    deleteAtIdx(A,&n,0);
    print(A,n);
}