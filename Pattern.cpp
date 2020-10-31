#include<iostream>
#include<limits.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int len,i,j,num,mini = INT_MAX;
    cin>>len;
    vector<int> arr;
    for(i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }
    mini = *min_element(arr.begin(),arr.end());
    for(i=0;i<len;i++){
        if(arr[i]<0){
            for(j=0;j<abs(mini-arr[i]);j++)
                cout<<" ";
            for(j=0;j<abs(arr[i])+1;j++)
                cout<<"*";
        }
        else{
            for(j=0;j<abs(mini);j++)
                cout<<" ";
            for(j=0;j<abs(arr[i])+1;j++)
                cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
