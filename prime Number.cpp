#include<iostream>
using namespace std;

int main()
{

    int n,c=0;
    cin>>n;
    if(n==1)
        cout<<"prime number";
     if(n<1)
        cout<<"Invalid Number";

     for(int i=2;i<n;i++)
     {
         if(n%i==0)
         {
             c++;
             break;
         }
     }
     if(c==0)
        cout<<"prime number";
     else
        cout<<"Not a prime number";
}
