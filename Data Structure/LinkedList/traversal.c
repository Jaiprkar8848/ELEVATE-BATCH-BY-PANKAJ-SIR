#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void traversal(Node *start){
    Node *ptr=start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

void main(){
    Node *start=malloc(sizeof(Node)); 
    Node *a=malloc(sizeof(Node)); 
    Node *b=malloc(sizeof(Node)); 
    Node *c=malloc(sizeof(Node)); 
    Node *d=malloc(sizeof(Node)); 
    start->data=10;
    a->data=20;
    b->data=30;
    c->data=40;
    d->data=50;
    start->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;

    traversal(start);
}