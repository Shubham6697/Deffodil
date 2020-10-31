    //total no. of characters in string followed by that character. for eg INPUT --> aaabsbbbeer   OUTPUT -->3a4b1s2e1r
#include<stdio.h>
#include<string.h>
int main(){
    int hash1[26] ={0},i;
    char s[1000];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
        hash1[s[i]-'a']++;
    for(i=0;i<strlen(s);i++){
        if(hash1[s[i]-'a'] != 0){
            printf("%d%c",hash1[s[i]-'a'],s[i]);
            hash1[s[i]-'a']=0;
        }
    }
    return 0;
}

