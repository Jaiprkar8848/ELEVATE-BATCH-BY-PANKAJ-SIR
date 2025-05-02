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
    traversal(start);
}