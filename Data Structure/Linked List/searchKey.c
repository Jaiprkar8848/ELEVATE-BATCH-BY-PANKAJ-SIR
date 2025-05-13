#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

int Search(Node *start,int key){
    Node *ptr=start;
    while(ptr!=NULL){
        if(ptr->data==key)
            return 1;
        ptr=ptr->next;
    }
    return 0;
}

void main(){
    Node *start=malloc(sizeof(Node)); 
    Node *a=malloc(sizeof(Node)); 
    Node *b=malloc(sizeof(Node)); 
    Node *c=malloc(sizeof(Node)); 
    Node *d=malloc(sizeof(Node)); 
    start->data=10;
    a->data=2;
    b->data=30;
    c->data=81;
    d->data=50;
    start->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    int key=81;
    if(Search(start,key))
        printf("Yes key is there");
    else
        printf("Key is not there");

}