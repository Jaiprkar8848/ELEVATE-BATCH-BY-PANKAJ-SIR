#include<stdio.h>
void main(){
    int n=5;
    int i,j,spaces;
    char ch='A';
    for(i=1;i<=n;i++){
        for(spaces=1;spaces<=n-i;spaces++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<=n-1;i++){
        for(spaces=1;spaces<=i;spaces++)
            printf(" ");
        for(j=1;j<=2*(n-i)-1;j++)
            printf("*");
        printf("\n");
    }
}