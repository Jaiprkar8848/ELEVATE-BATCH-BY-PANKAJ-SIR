#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void traversal(Node *start){
    Node *ptr=start;
    while(ptr!=NULL){
        
        if(ptr->next!=NULL) printf("%d->",ptr->data);
        else printf("%d",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

Node *fun(Node *a,Node *b){
    static struct Node* newHead=NULL;
    struct Node* temp;
    if(a==NULL && b==NULL) return newHead;
    if(a==NULL){
        temp=b->next;
        b->next=newHead;
        newHead=b;
        return fun(a,temp);  
    }
    if(b==NULL){
        temp=a->next;
        a->next=newHead;
        newHead=a;
        return fun(temp,b);  
    }
    if(a->data<b->data){
        temp=a->next;
        a->next=newHead;
        newHead=a;
        return fun(temp,b);
    }
    else{
        temp=b->next;
        b->next=newHead;
        newHead=b;
        return fun(a,temp);
    }
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
    headA=fun(headA,headB);
    traversal(headA);
}