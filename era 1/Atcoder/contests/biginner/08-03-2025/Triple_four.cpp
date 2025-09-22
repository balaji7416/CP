#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n; cin>>n; 
    vector<int> temp(n);
    for(int i=0; i<n ;i++){
        cin>>temp.at(i);
    }
    bool flag=false; 
    for(int i=0; i<temp.size()-2; i++){
        if(temp.at(i)==temp.at(i+1) && temp.at(i)==temp.at(i+2)){
            flag=true; 
            break;
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}