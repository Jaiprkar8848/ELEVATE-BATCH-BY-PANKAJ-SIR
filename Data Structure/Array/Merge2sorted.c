#include<stdio.h>

void merge2Sorted(int A[],int m,int B[],int n,int C[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i]<B[j])
            C[k++]=A[i++];
        else
            C[k++]=B[j++];
    }
    // B completes
    while(i<m)
        C[k++]=A[i++];
    // A completes
    while(j<n)
        C[k++]=B[j++];
}

void main(){
    int A[]={10,20,30,40};
    int m=4;
    int B[]={4,11,19,54,60,70};
    int n=6;
    int C[m+n];

    merge2Sorted(A,m,B,n,C);
    for(int i=0;i<m+n;i++)
        printf("%d ",C[i]);
}