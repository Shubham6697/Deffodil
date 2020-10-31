#include<iostream>
using namespace std;

// A number is said to be perfact if their factor sum is same as its number...
//ex:-6=1,2,3 their factor and tha sum 1+2+2=6

int main()
{
    int n,p,s=0;
    cin>>n;
    p=n;
   for(int i=1;i<=n/2;i++)
   {
       if(n%i==0)
       {
           s=s+i;
           continue;
       }
   }
   if(p==s)
   {
       cout<<"perfect number";

   }
   else{
    cout<<"Not a perfact number";
   }

}
