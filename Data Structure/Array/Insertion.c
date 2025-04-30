#include<stdio.h>
#define SIZE 10

void insertAtEnd(int a[],int *n,int x){
    a[*n]=x;
    *n+=1;
}

void insertAtIdx(int A[],int *n,int x,int idx){
    for(int i=*n;i>idx;i--){
        A[i]=A[i-1];
    }
    A[idx]=x;
    *n+=1;
}

void print(int A[],int n){
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n");
}

void main(){
    int A[SIZE]={10,20,30,40};
    int n=4;    // shows no. of elements

    print(A,n);
    insertAtEnd(A,&n,99);
    print(A,n);
    insertAtIdx(A,&n,4,1);
    print(A,n);
    insertAtIdx(A,&n,100,0);
    print(A,n);
}