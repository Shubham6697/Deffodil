#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool check_prime(int n){
    for(int j=2;j<n;j++)
        if(n%j == 0)
            return false;
    return true;

}
vector<int> prime(int n){
    vector<int> v;
    v.push_back(1);
    for(int i=2;v.size()!=n;i++)
        if(check_prime(i))
            v.push_back(i);
    return v;
}
void draw_pattern(vector<int>num,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num[j]<<" ";
        }
        cout<<endl;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> pr;
    pr = prime(n);
    draw_pattern(pr,n);

    return 0;
}
