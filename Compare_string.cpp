#include<iostream>
using namespace std;
int main()
{
    string s1="i like banana",s2;
    int c=0;
    getline(cin,s2);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i] != s2[i])
            c++;
    }
    if(c == 1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
