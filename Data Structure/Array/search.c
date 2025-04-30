#include<stdio.h>

int lSearch(int A[],int n,int key){
    for(int i=0;i<n;i++){
        if(A[i]==key)
            return i;
    }
    return -1;
}

int binSearch(int A[],int n,int key){
    int start=0,end=n-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(A[mid]==key)
            return mid;
        else if(A[mid]<key)
            start=mid+1;
        else
            end=mid-1;
    }
    return -1;
}

void main(){
    int A[]={29,30,34,54,88,91,108,175};
    int n=8;

    // linear search
    if(lSearch(A,n,78)==-1)
        printf("78 not exist\n");
    else
        printf("78 at index %d\n",lSearch(A,n,78));
    

    // Binary search
    if(binSearch(A,n,91)==-1)
        printf("91 not exist\n");
    else
        printf("91 at index %d\n",binSearch(A,n,91));
}