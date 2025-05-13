#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void Alternate1(Node *start){
    Node *ptr=start;
    int cnt=0;
    while(ptr!=NULL){
        if(cnt%2==0)
            printf("%d ",ptr->data);
        ptr=ptr->next;
        cnt++;
    }
    printf("\n");
}

void Alternate2(Node *start){
    Node *ptr=start;
    int flag=1;
    while(ptr!=NULL){
        if(flag)
            printf("%d ",ptr->data);
        flag=!flag;
        ptr=ptr->next;
    }
    printf("\n");
}

void Alternate3(Node *start){
    Node *ptr=start;
    while(ptr!=NULL && ptr->next!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next->next;
    }
    // even nodes
    if(ptr==NULL)
        return;
    // odd nodes
    if(ptr->next==NULL)
        printf("%d",ptr->data);
    printf("\n");
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

    Alternate1(start);
    Alternate2(start);
    Alternate3(start);
}