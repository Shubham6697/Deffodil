#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    cout<<"Before Swap "<<endl<<"a = "<<a<<" and "<<"b = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swap "<<endl<<"a = "<<a<<" and "<<"b = "<<b;
    return 0;
}
