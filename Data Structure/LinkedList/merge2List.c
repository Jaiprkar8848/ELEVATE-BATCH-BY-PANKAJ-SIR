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

Node *merge2(Node *headA,Node *headB){
    if(headA==NULL)
        return headB;
    if(headB==NULL)
        return headA;
    
    Node *first,*last;
    // handle the first number separately
    if(headA->data<headB->data){
        first=last=headA;
        headA=headA->next;
    }
    else{
        first=last=headB;
        headB=headB->next;
    }

    while(headA && headB){
        if(headA->data<headB->data){
            last->next=headA;
            headA=headA->next;
            last=last->next;
        }
        else{
            last->next=headB;
            headB=headB->next;
            last=last->next;
        }
    }
    
    if(headA==NULL)
        last->next=headB;
    else
        last->next=headA;
        
    return first;
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
    b->next=NULL;

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

    traversal(headA);
    traversal(headB);
    headA=merge2(headA,headB);
    traversal(headA);
}