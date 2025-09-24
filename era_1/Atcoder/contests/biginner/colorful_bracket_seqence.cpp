#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    string s; cin>>s;
    stack<char> st;
    bool flag = true;
    
    for(auto &i:s){

        if(i=='(' || i=='[' || i=='<'){
            st.push(i);
        }
        else if(i==')' && !st.empty() && st.top()=='('){
            st.pop();
        }
        else if(i==']' && !st.empty() && st.top()=='['){
            st.pop();
        }
        else if(i=='>' && !st.empty() && st.top()=='<'){
            st.pop();
        }
        else{
            flag=false;
            break;
        }
    }
    
    if(flag && st.empty()){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    
    return 0;
}