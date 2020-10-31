#include<iostream>
using namespace std;

// A number is said to be Adams number if their square and reverse of the same number square is the reverse of square of number.
// n=12 square=144
// reverse =21 and their sqauare 441
// both squares are reverse of each other

int reversenumber(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int squarenumber(int n)
{
    return (n*n);
}
int checkAdamsNumber(int n)
{
    int a=squarenumber(n);
    int b=squarenumber(reversenumber(n));

    if(a==reversenumber(b))
        return true;
        else
    return false;
}

int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(checkAdamsNumber(n)==true)
        cout<<"Adams Number";
    else
        cout<<"Not an Adams Number";

    return 0;
}
