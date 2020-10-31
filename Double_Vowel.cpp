                                /* The task is to double the vowel characters in the sting*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str,new_str="";
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
            new_str+=str[i];
            new_str+=str[i];
        }
        else
            new_str+=str[i];

    }
    cout<<endl<<new_str;
    return 0;
}
