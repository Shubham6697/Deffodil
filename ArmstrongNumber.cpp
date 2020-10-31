#include<iostream>
using namespace std;

// armstrong number is a number when we cube the all digit and sum then the same number found.

int main()
{
    int n,p,rem,s=0;
    cin>>n;
    p=n;
    while(n)
    {

        rem=n%10;
        s=s+rem*rem*rem;
        n/=10;
    }
    if(s==p)
    {
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not a Armstrong number";
    }
    return 0;

}
