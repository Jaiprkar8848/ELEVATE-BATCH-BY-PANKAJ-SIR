// CREATE A STRUCUTRE OF DOB

// date -> 1 to 31 -> 5 bit required
// months -> 1 to 12 -> 4 bit required

// bitfield is used for efficient memory utilisation
#include<stdio.h>

struct DOB{
    unsigned int dd:5;
    unsigned int mm:4;
    unsigned int year;
};

struct st{
    char a:1;
    char b:2;
    char c:3;
};

void main(){
    struct DOB d={12,12,1222};
    printf("%d\n",sizeof(d));
    struct st s={1,3,5};
    printf("%d %d %d",s.a,s.b,s.c);
}