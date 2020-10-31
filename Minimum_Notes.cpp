            // Calculating the minimum notes
#include<iostream>
using namespace std;
int main(){
    int amount,notes=0;
    cin>>amount;

    while(amount!=0){
        if(amount >= 1 && amount < 2)
            amount-=1;
        else if(amount >= 2 && amount < 5)
            amount-=2;
        else if(amount >= 5 && amount < 10)
            amount-=5;
        else if(amount >= 10 && amount < 20)
            amount-=10;
        else if(amount >= 20 && amount < 50)
            amount-=20;
        else if(amount >= 50 && amount < 100)
            amount-=50;
        else if(amount >= 100 && amount < 200)
            amount-=100;
        else if(amount >= 200 && amount < 500)
            amount-=200;
        else if(amount >= 500 && amount < 2000)
            amount-=500;
        else
            amount-=2000;

        notes++;
    }
    cout<<notes;
    return 0;
}
