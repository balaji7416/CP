#include<bits/stdc++.h>
using namespace std; 
int main(){

    string str; cin>>str; 
    string ans="";
    for(auto i: str){
        if(i=='2'){
            ans+=i;
        }
    }

    cout<<ans;
}