// Question: Given a string of alphabet, check whether input string have 
// only character difference or not. 
// Note: given input string has equal length as stored string

#include <stdio.h>  
#include<string.h>
int main() 
{ 
    char stored[]="i like banana"; //stored string
    char input[50]; 
    int i,flag=0;
    scanf("%[^\n]", input);  //input string
    for(i=0;i<strlen(stored);i++){
        if(stored[i]!=input[i])
        flag++;
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
    
} 
