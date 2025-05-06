#include<stdio.h>
#define size 4

typedef struct Stack{
    int A[size];
    int top;
}stack;

void push(stack *s,int x){
    if(s->top==size-1){
        printf("Overflow\n");
        return;
    }
    s->top+=1;
    s->A[s->top]=x;
}

int pop(stack *s){
    if(s->top==-1){
        printf("Underflow\n");
        return -1;
    }
    int temp=s->A[s->top];
    s->top-=1;
    return temp;
}

void printStack(stack *s){
    int idx=s->top;
    if(idx==-1){
        printf("Empty stack\n");
        return;
    }
    while(idx!=-1){
        printf("%d ",s->A[idx]);
        idx--;
    }
    printf("\n");
}

void main(){
    stack s;
    s.top=-1;
    push(&s,10);
    push(&s,5);
    push(&s,3);
    push(&s,4);
    printStack(&s);
    push(&s,6);
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printf("%d\n",pop(&s));
    printStack(&s);
}