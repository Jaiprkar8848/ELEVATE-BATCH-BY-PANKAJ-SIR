#include<stdio.h>

void reversePart(int A[],int s,int e){
    int temp;
    while(s<e){
        temp=A[s];
        A[s]=A[e];
        A[e]=temp;
        s++;
        e--;
    }
}

void rotate(int A[],int n,int k){
    k=k%n;
    reversePart(A,0,k-1);
    reversePart(A,k,n-1);
    reversePart(A,0,n-1);
}

void main(){
    int A[]={1,2,3,4,5,6};
    int n=6;
    int k=2;

    rotate(A,n,k);
    for(int i=0;i<n;i++)
        printf("%d ",A[i]);
}