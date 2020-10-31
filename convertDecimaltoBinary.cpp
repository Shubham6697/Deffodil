#include<iostream>
using namespace std;

int main()
{

    int n,p,quoit,i=1;
    cin>>n;
    int bin[100];
    p=n;
    while(p!=0)
    {

        bin[i++]=p%2;
        p/=2;
    }
    for(int j=i-1;j>0;j--)
    {
        cout<<bin[j];
    }
    return 0;
}
