#include<stdio.h>

int myStrlen(const char *p){
    int cnt=0;
    while(*p!='\0'){
        cnt++;
        p++;
    }
    return cnt;
}

void main(){
    char *p="Pankaj Sharma";
    printf("The length of string is %d",myStrlen(p));
}