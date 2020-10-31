#include<iostream>
using namespace std;

// if a number and its reverse is same then the number is palindrome

int main()
{
    int n,p,rem,rev=0;
    cout<<"enter the number:";
    cin>>n;
    p=n;
    while(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;

    }

    if(rev==p)
    {
        cout<<"Palindrome number";
    }
    else
    {
        cout<<"Not a Palindrome number";
    }
}
