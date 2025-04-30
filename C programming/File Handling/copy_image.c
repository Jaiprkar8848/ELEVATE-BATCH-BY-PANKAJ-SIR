#include<stdio.h>

void main(){
    FILE *fp,*tp;
    fp=fopen("CA foun.png","rb");
    tp=fopen("target.png","wb");
    while(1){
        if(feof(fp))
            break;
        *tp=*fp;
        fp++;
        tp++;
    }
    fclose(fp);
    fclose(tp);
}