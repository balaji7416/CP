#include<bits/stdc++.h>
using namespace std; 
int fact(int n){
    if(n==1) return 1; 
    return n*fact(n-1);
}

int main(){
    string s; cin>>s; 
    int n=s.size();
    map<char,int> mapp;
    for(auto i: s){
        mapp[i]++;
    }
    
    int ans=fact(n);
    for(auto i: mapp){
        if(i.second > 1){
            ans/=fact(i.second);
        }
    }

    cout<<ans<<endl;
   

    return 0;
}