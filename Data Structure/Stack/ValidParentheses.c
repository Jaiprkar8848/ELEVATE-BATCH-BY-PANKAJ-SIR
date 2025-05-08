#include<stdio.h>
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
    return;
}

void pop(stack *s){
    if(s->top==-1){
        printf("Underflow\n");
        return;
    }
    s->top-=1;
    return;
}

void isValid(char str[]){
    stack *s=malloc(sizeof(stack));
    s->top=-1;
    int i=0,flag=0;
    while(str[i]!='\0'){
        if(str[i]==')' && s->top==-1){
            flag=1;
            break;
        }
        else if(str[i]=='(')
            push(s,str[i]);
        else if(str[i]==')')
            pop(s);
        i++;
    }
    if(s->top!=-1 || flag==1)
        printf("Invalid\n");
    else
        printf("Valid\n");
}

void main(){
    char str1[]="(())()";
    char str2[]="(()";
    char str3[]=")()";
    isValid(str1);
    isValid(str2);
    isValid(str3);
}