#include<iostream>
using namespace std;

int main()
{

    int n,decimalN=0,i=1,rem;
    cout<<"enter binary number:";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        decimalN=decimalN+rem*i;
        i=i*2;
        n/=10;
    }
    cout<<"decimal number:"<<decimalN;
    return 0;
}
