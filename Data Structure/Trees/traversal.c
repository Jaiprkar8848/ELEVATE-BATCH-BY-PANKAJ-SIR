#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

void preorder(Node* root){
    if(root==NULL) return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    printf("%d ",root->data); 
    inorder(root->right);   
}
 
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left); 
    postorder(root->right);
    printf("%d ",root->data); 
} 

void main(){                                                                                                                                                                                                            
    Node* root=malloc(sizeof(Node));
    Node* a=malloc(sizeof(Node));
    Node* b=malloc(sizeof(Node));
    Node* c=malloc(sizeof(Node));
    Node* d=malloc(sizeof(Node));
    Node* e=malloc(sizeof(Node));
    Node* f=malloc(sizeof(Node));
    Node* g=malloc(sizeof(Node));
    a->data=10;
    a->left=b;
    a ->right=c;
    b->data=20;
    b->left=d;
    b->right=e;
    c->data=30;
    c->left=f;
    c->right=g;
    d->data=40;
    d->left=d->right=NULL;
    e->data=50;
    e->left=e->right=NULL;
    f->data=60;
    f->left=f->right=NULL;
    g->data=70;
    g->left=g->right=NULL;
    root=a;

    printf("Preorder :");
    preorder(root);
    printf("\nInorder : ");
    inorder(root);
    printf("\nPostorder : ");
    postorder(root);
}