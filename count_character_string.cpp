    //total no. of characters in string followed by that character. for eg INPUT --> aaabsbbbeer   OUTPUT -->3a4b1s2e1r
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int hash1[26];
    memset(hash1,0,sizeof(hash1));
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        hash1[s[i]-'a']++;
    for(int i=0;i<s.length();i++){
        if(hash1[s[i]-'a'] != 0){
            cout<<hash1[s[i]-'a']<<s[i];
            hash1[s[i]-'a']=0;
        }
    }
    return 0;
}
