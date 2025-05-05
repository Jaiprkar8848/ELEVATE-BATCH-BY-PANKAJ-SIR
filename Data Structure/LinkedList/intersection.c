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

int countNode(Node *head){
    int cnt=0;
    while(head){
        cnt++;
        head=head->next;
    }
    return cnt;
}

void intersection(Node *headA,Node *headB){
    int c1=countNode(headA);
    int c2=countNode(headB);
    int extra=abs(c1-c2);
    int i;
    if(c1<c2){
        // LL2 is bigger 
        for(i=1;i<=extra;i++)
            headB=headB->next;
    }
    else{
        // LL1 is bigger
        for(i=1;i<=extra;i++)
            headA=headA->next;
    }
    while(headA!=headB){
        headA=headA->next;
        headB=headB->next;
    }
    printf("%d %d",headA->data,headB->data);
}

void main(){
    Node *headA=malloc(sizeof(Node)); 
    Node *a=malloc(sizeof(Node)); 
    Node *b=malloc(sizeof(Node));
    Node *h=malloc(sizeof(Node)); 
    headA->data=10;
    a->data=9;
    h->data=5;
    headA->next=a;
    h->next=NULL;

    Node *headB=malloc(sizeof(Node)); 
    Node *c=malloc(sizeof(Node)); 
    Node *d=malloc(sizeof(Node)); 
    Node *e=malloc(sizeof(Node)); 
    Node *f=malloc(sizeof(Node)); 
    Node *g=malloc(sizeof(Node)); 
    headB->data=1;
    c->data=4;
    d->data=3;
    e->data=2;
    f->data=7;
    g->data=5;
    headB->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=NULL;
    a->next=f;
    traversal(headA);
    traversal(headB);
    intersection(headA,headB);
}