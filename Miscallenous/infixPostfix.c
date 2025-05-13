#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 10
typedef struct stack{
    int top;
    char A[SIZE];
}stack;

void push(stack *s,char ch){
    if(s->top==SIZE-1){
        printf("Overflow\n");
        return;
    }
    s->top+=1;
    s->A[s->top]=ch;
}

char pop(stack *s){
    if(s->top==-1){
        char ch='0';
        return ch;
    }
    char ch=s->A[s->top];
    s->top-=1;
    return ch;
}


void infixToPostfix(char inf[],int n,stack *s){
    int i=0,j=0;
    char *post=malloc(sizeof(char)*n);
    while(inf[i]){
        // if character is operand
        if(inf[i]!='x' && inf[i]!='+')
            post[j++]=inf[i];
        // if stack is empty
        else if(s->top==-1)
            push(s,inf[i]);
        // if we get + then give chance to all other in the stack
        else if(inf[i]=='+'){
            while(s->top!=-1)
                post[j++]=pop(s);
            push(s,inf[i]);
        }
        // if we get x then pop his friend and block the lower priority
        else if(inf[i]=='x'){
            while(s->A[s->top]!='+')
                post[j++]=pop(s);
            push(s,inf[i]);
        }
        i++;
    }
    // string end
    while(s->top!=-1)
        post[j++]=pop(s);
    printf("%s",post);
}

void main(){
    stack *s=malloc(sizeof(stack));
    s->top=-1;

    char inf[]="2+3x4";
    infixToPostfix(inf,5,s);
}