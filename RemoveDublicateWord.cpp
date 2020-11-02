#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2="";
    unordered_set<string> hsh;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ')
        {
            //it's check whether the word 's2' is already present in 'hsh' or not....... if not present then the condition become true
            if(hsh.find(s2) == hsh.end()) {
                cout << s2 << " ";
                hsh.insert(s2);
            }
            s2="";
        }
        else if(i == s.length()-1)
        {
            s2+=s[i];
            if(hsh.find(s2) == hsh.end()) {
                cout << s2 << " ";
                hsh.insert(s2);
            }
        }
        else
            s2+=s[i];
    }


    return 0;
}
