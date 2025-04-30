// FIND MAX AND MIN WITHOUT USING CONDITION LOOP
// a<b -> max=(a+b)+(b-a)/2  and  min=(a+b)-(b-a)/2

#include<stdio.h>
#include<stdlib.h>
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int maxi=((a+b)+abs(b-a))/2;
    int mini=((a+b)-abs(b-a))/2;
    printf("maxi=%d\nmini=%d",maxi,mini);
}