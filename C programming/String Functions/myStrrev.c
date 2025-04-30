#include<stdio.h>
#include<string.h>

void myStrrev(char *p){
    int len=strlen(p);
    int i=0;
    char temp;
    while(i<len/2){
        temp=p[i];
        p[i]=p[len-1-i];
        p[len-1-i]=temp;
        i++;
    }
}

void main(){
    char arr[10]="Pankaj";
    myStrrev(arr);
    printf("%s",arr);
}