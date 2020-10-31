                                /* The task is to double the vowel characters in the sting*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[1000],new_str[10000];
    scanf("%s",&str);
    int len = strlen(str),j=0,i;
    for(i=0;i<len;i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
            new_str[j++]=str[i];
            new_str[j++]=str[i];
        }
        else
            new_str[j++]=str[i];

    }
    printf("\n%s",new_str);
    return 0;
}
