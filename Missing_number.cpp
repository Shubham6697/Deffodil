#include<iostream>
#include<string>
using namespace std;
int main(){
    int len,num,total;
    cin>>len;
    total= (len+1)*(len+2)/2;
    for(int i=0;i<len;i++){
        cin>>num;
        total-=num;
    }
    cout<<endl<<total;
    return 0;
}

