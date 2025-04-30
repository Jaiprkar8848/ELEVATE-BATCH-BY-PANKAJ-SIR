#include<stdio.h>
void myStrcat(char *dest,char *src){
    // go to the end of array
    while(*dest!='\0')
        dest++;
    
    // append source to end of destination
    while(*src!='\0'){
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}

void main(){
    char p[20]="Pankaj";
    char q[10]="Sharma";
    myStrcat(p," ");
    myStrcat(p,q);
    printf("%s",p);
}