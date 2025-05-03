#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

int countNode(Node *start){
    Node *ptr=start;
    int cnt=0;
    while(ptr!=NULL){
        cnt++;
        ptr=ptr->next;
    }
    return cnt;
}

void insertAtBegin(Node **start,int key){
    // create a new node
    Node* newnode=malloc(sizeof(Node));
    if(newnode!=NULL){
        newnode->data=key;
        newnode->next=*start;
        *start=newnode;
    }
}

void insertAtEnd(Node *start,int key){
    Node* newnode=malloc(sizeof(Node));
    if(newnode!=NULL){
        Node *ptr=start;
        newnode->data=key;
        newnode->next=NULL;
        if(ptr==NULL){
            start=newnode;
            return;
        }
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=newnode;
    }
}

// p not points to last node
void insertAfterNode(Node* start,Node *p,int key){
    Node* newnode=malloc(sizeof(newnode));
    if(newnode!=NULL){
        newnode->data=key;
        newnode->next=p->next;
        p->next=newnode;
    }
}

void traversal(Node *start){
    Node *ptr=start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

void main(){
    Node *start=malloc(sizeof(Node));  
    start->data=10;
    start->next=NULL;
    traversal(start);
    insertAtBegin(&start,32);
    // start=insertAtBegin(start,32)
    traversal(start);
    insertAtEnd(start,54);
    traversal(start);
    Node *p=start->next;
    insertAfterNode(start,p,12);
    traversal(start);
}