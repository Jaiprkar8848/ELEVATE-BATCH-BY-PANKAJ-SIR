#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int val;
    struct Node *next;
}Node;

void display(Node *head){
    Node *ptr=head;
    while(ptr){
        printf("%d ",ptr->val);
        ptr=ptr->next;
    }
    printf("\n");
}

Node* push(Node *head,int x){
    Node *temp=malloc(sizeof(Node));
    temp->val=x;
    temp->next=head;
    head=temp;
    return head;
}

int pop(Node **head){
    if(*head==NULL){
        printf("Underflow ");
        return -1;
    }
    int temp=(*head)->val;
    *head=(*head)->next;
    return temp;
}

void main(){
    Node *head=NULL;
    head=push(head,1);
    head=push(head,2);
    head=push(head,3);
    display(head);
    printf("%d\n",pop(&head));
    printf("%d\n",pop(&head));
    printf("%d\n",pop(&head));
    printf("%d\n",pop(&head));
}