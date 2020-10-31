#include<iostream>
using namespace std;

int main()
{

int yr;
cout<<"Enter the year: ";
cin>>yr;
if((yr%4==0) && (yr%100!=0))
{
cout<<"Leap year";
}
else if ((yr%100==0) && (yr%400==0))
{
cout<<"Leap year";
}
else if(yr%400==0)
{
cout<<"Leap year";
}
else
{
cout<<"Not a Leap year";
}
}
