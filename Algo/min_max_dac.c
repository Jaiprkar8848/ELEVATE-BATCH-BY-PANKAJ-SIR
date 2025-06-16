#include<stdio.h>

typedef struct pair{
    int max;
    int min;
}pair;

pair minMax(int A[],int i,int j){
    pair p;
    // single element
    if(i==j){
        p.max=p.min=A[i];
        return p;
    }
    // 2 element
    else if(i==j-1){
        if(A[i]>A[j]){
            p.max=A[i];
            p.min=A[j];
        }
        else{
            p.max=A[j];
            p.min=A[i];
        }
        return p;
    }
    else{
        int mid=(i+j)/2;
        pair p1=minMax(A,i,mid);
        pair p2=minMax(A,mid+1,j);
        p.max=p1.max>p2.max?p1.max:p2.max;
        p.min=p1.min<p2.min?p1.min:p2.min;
        return p;
    }
} 

void main(){
    int A[]={19,-3,4,11,17,-10,8,5};
    pair p=minMax(A,0,7);
    printf("%d %d",p.max,p.min);
}