                /* The task is to find closest element to given number in array,if it's tie print greatest number*/
#include<iostream>
#include<limits.h>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){
    int x,len,num,min_diff, maxi = INT_MIN,i;
    vector<int> arr,diff;
    cout<<"Enter size of array : ";
    cin>>len;
    cout<<endl<<"Enter element of array : ";
    for(i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }

    cout<<endl<<"Enter number x : ";
    cin>>x;

    for(i=0;i<len;i++)
        diff.push_back(abs(arr[i]-x));

    min_diff = *min_element(diff.begin(),diff.end());

    for(int i=0;i<len;i++){
        if(diff[i] == min_diff)
            if(maxi < arr[i])
                maxi = arr[i];
    }
    cout<<endl<<maxi;
    return 0;
}
