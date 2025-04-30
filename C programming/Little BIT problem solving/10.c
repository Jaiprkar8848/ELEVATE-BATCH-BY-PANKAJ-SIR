// Print number 1 to 10 without using semicolon

#include<stdio.h>
void main(){
    static int n=1;
    while(printf("%d ",n),n=n+1,n<=10){

    }
}