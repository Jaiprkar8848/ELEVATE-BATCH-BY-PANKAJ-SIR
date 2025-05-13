#include<stdio.h>
#include<stdlib.h>

typedef struct CQueue{
    int rear;
    int front;
    int size;
    int *A;
}CQueue;

CQueue* createCQueue(int n){
    CQueue *cq=malloc(sizeof(CQueue));
    cq->front=cq->rear=-1;
    cq->size=n;
    cq->A=malloc(sizeof(int)*n);
    return cq;
}

void enqueue(CQueue *cq,int x){
    if(cq->front==(cq->rear+1)%cq->size){
        printf("Overflow\n");
        return;
    }
    else if(cq->rear==cq->size-1)
        cq->rear=0;
    else if(cq->front==-1)
        cq->front=cq->rear=0;
    else
        cq->rear+=1;
    cq->A[cq->rear]=x;
}

void dequeue(CQueue *cq){
    int temp;
    if(cq->front==-1){
        printf("Underflow\n");
        return;
    }
    else if(cq->front==cq->rear)
        cq->front=cq->rear=-1;
    else if(cq->front==cq->size-1)
        cq->front=0;
    else
        cq->front++;
}

void traversal(CQueue *cq){
    if(cq->front==-1){
        printf("Empty\n");
        return;
    }
    int i=cq->front;
    while(i!=cq->rear){
        printf("%d ",cq->A[i]);
        i=(i+1)%cq->size;
    }
    printf("%d",cq->A[i]);
    printf("\n");
}

void main(){
    CQueue *cq=createCQueue(3);
    enqueue(cq,1);
    traversal(cq);
    enqueue(cq,2);
    traversal(cq);
    enqueue(cq,3);
    traversal(cq);
    enqueue(cq,4);
    dequeue(cq);
    traversal(cq);
    enqueue(cq,4);
    traversal(cq);
    dequeue(cq);
    traversal(cq);
    dequeue(cq);
    traversal(cq);
    dequeue(cq);
    traversal(cq);
}