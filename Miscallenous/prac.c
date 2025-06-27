#include<stdio.h>

void f(int n){
    static int d=1;
    printf("%d",n);
    printf("%d",d);
    d=d+n;
    if(n>1) f(--n);
    printf("%d",d);
}
int main(){
    f(3);
}