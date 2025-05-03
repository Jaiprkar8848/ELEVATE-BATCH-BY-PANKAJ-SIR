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
    printf("\n");
}

void middle1(Node* start){
    Node* ptr=start;
    int cnt=0;
    while(ptr!=NULL){
        cnt++;
        ptr=ptr->next;
    }
    ptr=start;
    cnt=cnt/2;
    for(int i=1;i<=cnt;i++)
        ptr=ptr->next;
    printf("%d\n",ptr->data);
}

void middle2(Node* start){
    Node *slow,*fast;
    slow=start;
    fast=start;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("%d\n",slow->data);
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
    middle1(start);
    Node*e=malloc(sizeof(Node));
    e->data=60;
    e->next=NULL;
    d->next=e;
    traversal(start);
    middle1(start);
    middle2(start);
}