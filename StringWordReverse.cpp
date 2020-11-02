#include<iostream>
using namespace std;
int main()
{
    string s1,s2="";
    string s[1000];
    int len = 0;
    getline(cin,s1);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i] == ' ')
        {
            s[len] = s2;
            len++;
            s2="";
        }
        else if(i == s1.length()-1)
        {
            s2+=s1[i];
            s[len] = s2;
            len++;
        }
        else
            s2+=s1[i];
    }

    for(int i=len-1;i>=0;i--)
        cout<<s[i]<<" ";

    return 0;
}
