#include<iostream>
#include<algorithm>
#include<vector>
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
                a[i]++;
                left--;
                right++;
            }
            else
            {
                break;
            }
        }
    }
    cout<<*max_element(a.begin(),a.end());
    return 0;
}
