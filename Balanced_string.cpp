#include<iostream>
#include<stack>
using namespace std;
bool balanced_string(string str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        if(str[i] == '[' || str[i] == '(' || str[i] == '{')
            st.push(str[i]);
        else{
            if(!st.empty()){
                if(st.top() == '(' && str[i] == ')')
                    st.pop();
                else if(st.top() == '[' && str[i] == ']')
                    st.pop();
                else if(st.top() == '{' && str[i] == '}')
                    st.pop();
                else
                    return false;
            }
            else
                return false;
        }
    }
    if(st.empty())
        return true;
    return false;
}
int main(){
    string str;
    cin>>str;
    if(balanced_string(str))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
