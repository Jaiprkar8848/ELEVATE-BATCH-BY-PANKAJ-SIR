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

int detectLoop(Node *head){
    Node *slow,*fast;
    slow=fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return 1;
    }
    return 0;
}

void main(){
    Node *headA=malloc(sizeof(Node)); 
    Node *a=malloc(sizeof(Node)); 
    Node *b=malloc(sizeof(Node)); 
    
    headA->data=1;
    a->data=3;
    b->data=10;
    headA->next=a;
    a->next=b;
    b->next=a;

    Node *headB=malloc(sizeof(Node)); 
    Node *c=malloc(sizeof(Node)); 
    Node *d=malloc(sizeof(Node)); 
    Node *e=malloc(sizeof(Node)); 
    Node *f=malloc(sizeof(Node)); 
    Node *g=malloc(sizeof(Node)); 
    headB->data=2;
    c->data=4;
    d->data=8;
    e->data=15;
    f->data=17;
    g->data=20;
    headB->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=NULL;

    if(detectLoop(headA))
        printf("First LL has loop\n");
    
    if(detectLoop(headB)!=1)
        printf("Second LL has no loop");
}