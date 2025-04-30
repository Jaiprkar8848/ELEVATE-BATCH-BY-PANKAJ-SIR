#include<stdio.h>

void myStrcpy(char *dest,char *src){
    while(*src!='\0'){
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
}

void main(){
    char arr[20];
    myStrcpy(arr,"Pankaj Sharma");
    printf("%s",arr);
}