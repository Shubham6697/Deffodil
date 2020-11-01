/*Given an integer array A containing N distinct integers, you have to find all the leaders in the array A.

An element is leader if it is strictly greater than all the elements to its right side.

NOTE:The rightmost element is always a leader.
Input : n = 6   A = [16, 17, 4, 3, 5, 2]        Output : [17, 5, 2]

*/

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int n,num;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    int high = v[n-1];
    stack<int> res;
    res.push(high);
    for(int i=n-2;i>=0;i--){
        if(high <= v[i]){
            high = v[i];
            res.push(high);
        }
    }
    while(!res.empty()){
        cout<<res.top()<<" ";
        res.pop();
    }
    return 0;
}

