#include<iostream>
using namespace std;

int main()
{

    int n,m,total;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {

        cin>>b[i];
    }
    total=n+m;
    int mer[total];
    copy(a,a+n,mer);
    copy(b,b+m,mer+n);
    for(int i=0;i<total;i++)
    {

        cout<<mer[i];
    }
    return 0;
}
