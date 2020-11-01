#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    //Prime Sieve
    bool prime[n2+1];
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=n2;i++)
    {
        if(prime[i] == true)
        {
            for(int j=i*i;j<=n2;j+=i)
                prime[j]=false;

        }

    }
    cout<<"Mega Prime is : ";
    for(int i=n1+1;i<n2;i++)
    {
        if(prime[i])
        {
            int p=i,flag=0;
            while(p!=0)
            {
                if(!prime[p%10])
                {
                    flag = 1;
                    break;
                }
                p/=10;
            }
            if(flag == 0)
                cout<<i<<" ";
        }
    }


    return 0;
}
