#include<iostream>
using namespace std;

// 0,1,1,2,3,5,8,13,21,34....
int main()
{

    int a=0,b=1,c=0,limit;
    cout<<"Enter the linit :";
    cin>>limit;
    cout<<"Fabonaacii series"<<a<<' '<<b<<' ';
    c=a+b;
    limit=limit-2;   //Because two element already printed
    while(limit)
    {

        cout<<c<<' ';
        a=b;
        b=c;
        c=a+b;
        limit--;
    }
    return 0;
}
