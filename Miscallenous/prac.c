#include<stdio.h>
#define size 10

void insertAtEnd(int A[],int* n,int x){
    A[*n]=x;
    *n+=1;
}

void insertAtIdx(int A[],int* n,int idx,int x){
    int i;
    for(i=*n-1;i>idx;i--){
        A[i+1]=A[i];
    }
    A[idx]=x;
    *n+=1;
}

void print(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void main(){
    int A[size]={10,20,30,40};
    int n=4;
    print(A,n);
    insertAtEnd(A,&n,5);
    print(A,n);
    insertAtIdx(A,&n,2,4);
    print(A,n);
}