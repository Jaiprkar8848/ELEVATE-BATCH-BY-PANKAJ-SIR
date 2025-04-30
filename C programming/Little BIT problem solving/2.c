// input -> 246
// output->3 (246->2+4+6->12->1+2->3)

// input -> 13862
// output -> 2(1+3+8+6+2->20->2+0->0)

#include<stdio.h>

// with loop and recursion
void logic1(int n){
    if(n>=0 && n<=9){
        printf("%d\n",n);
        return;
    }
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    logic1(sum);
}

//without loop and recursion (cyclicity of %9)
void logic2(int n){
    if(n%9==0)
        printf("%d",9);
    else
        printf("%d",n%9);
}

void main(){
    int n;
    scanf("%d",&n);
    logic1(n);
    logic2(n);
}