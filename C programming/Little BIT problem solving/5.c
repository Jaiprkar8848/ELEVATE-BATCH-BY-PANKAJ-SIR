// Equality of 2 number without using ==

#include<stdio.h>

void main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if(!(a^b))
        printf("EQUAL");
    else
        printf("NOT EQUAL");
}