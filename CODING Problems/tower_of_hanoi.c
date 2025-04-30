/*
3 pegs/rods and n disk of distinct size
initially all disk are at source our task is to transfer that disk to destination
we can't put bigger rod above lower rod
we can only move one disc at a time
*/


#include<stdio.h>

void TOH(int n,char src,char dest,char aux){
    if(n==1){
        printf("Move disc %d from %c to %c\n",n,src,dest);
        return;
    }
    // send above n-1 disk to aux
    TOH(n-1,src,aux,dest);
    // move last disk from src to dest
    printf("Move disc %d from %c to %c\n",n,src,dest);
    // apply TOH on remaining n-1 disk where source is aux
    TOH(n-1,aux,dest,src);
}

int countMoves(int n,char src,char dest,char aux){
    int cnt=0;
    if(n==1)
        return 1;
    cnt+=countMoves(n-1,src,aux,dest);
    cnt+=1;
    cnt+=countMoves(n-1,aux,dest,src);
    return cnt;
}

void main(){
    int n;
    printf("Enter the number of disc : ");
    scanf("%d",&n);

    TOH(n,'A','C','B');
    printf("The no. of moves are %d",countMoves(n,'A','C','B'));
}