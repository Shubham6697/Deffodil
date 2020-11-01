#include<iostream>
using namespace std;

// armstrong number is a number when we cube the all digit and sum then the same number found.

int main(){
    int num,n1,n2=0;
    cin>>num;
    n1=num;
    while(n1!=0){
        n2+=(n1%10)*(n1%10)*(n1%10);
        n1/=10;
    }
    if(n2 == num)
        cout<<"Armstrong Number";
    else
        cout<<"Not a Armstrong number";
    return 0;
}
