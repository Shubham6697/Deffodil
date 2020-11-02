#include<iostream>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int len = s.length();
    vector<int> a(len,1);
    for(int i=0;i<len;i++)
    {
        int left=i-1,right=i+1;
        while(left>=0 && right<len)
        {
            if(s[left] == s[right])
            {
                a[i]+=2;
                left--;
                right++;
            }
            else
            {
                break;
            }
        }
    }
    int index=0,maxi=INT_MIN;
    for(int i=0;i<len;i++)
    {
        if(maxi<a[i])
        {
            maxi = a[i];
            index = i;
        }
    }
    string s1;
    s1=s.substr(index-(maxi/2),maxi);
    cout<<maxi<<" "<<s1;

    return 0;
}
