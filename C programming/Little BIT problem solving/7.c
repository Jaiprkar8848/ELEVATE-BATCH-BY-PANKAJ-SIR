// Given 2 string s1 and s2
// find whether s2 is permutation of s1
// s1="heart"  s2="earth"
// only lower case letter

#include<stdio.h>
#include<string.h>
void main(){
    char s1[]="heart";
    char s2[]="earth";
    int freq[26]={0};

    int i;
    for(i=0;i<strlen(s1);i++)
        freq[s1[i]-'a']++;
    
    for(i=0;i<strlen(s2);i++)
        freq[s2[i]-'a']--;

    for(i=0;i<26;i++){
        if(freq[i]>0){
            printf("Not a permutation");
            return;
        }
    }
    printf("Permutation is there");
}