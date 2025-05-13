#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int rear;
    int front;
    int *A;
    int size;
}Queue;

Queue* createQueue(int n){
    Queue *q=malloc(sizeof(Queue));
    q->front=q->rear=-1;
    q->A=malloc(sizeof(int)*n);
    q->size=n;
    return q;
}
void enqueue(Queue *q,int x){
    if(q->rear==q->size-1){
        printf("Overflow\n");
        return;
    }
    else if(q->front==-1)
        q->front=q->rear=0;
    else
        q->rear+=1;
    q->A[q->rear]=x;
}
int dequeue(Queue *q){
    int temp;
    if(q->front==-1){
        printf("Underflow\n");
        return -1;
    }
    // single element
    else if(q->front==q->rear){
        temp=q->A[q->front];
        q->front=q->rear=-1;
    }
    else{
        temp=q->A[q->front];
        q->front+=1;
    }
    return temp;
}

void traversal(Queue *q){
    if(q->front==-1){
        printf("Empty queue\n");
        return;
    }
    for(int i=q->front;i<=q->rear;i++)
        printf("%d ",q->A[i]);
    printf("\n");
}

void main(){
    Queue *q=createQueue(3);
    enqueue(q,1);
    traversal(q);
    enqueue(q,2);
    traversal(q);
    enqueue(q,3);
    traversal(q);
    enqueue(q,4);
    dequeue(q);
    traversal(q);
    dequeue(q);
    traversal(q);
    dequeue(q);
    traversal(q);
    dequeue(q);
    traversal(q);
}