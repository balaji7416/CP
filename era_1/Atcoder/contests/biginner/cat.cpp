#include<bits/stdc++.h>
using namespace std;
bool compare(string a , string b){
    return a.size()<b.size();
}

int main() {
    
    int t; cin>>t; 
    string ans ="";
    vector<string> store(t);
    for(int i=0; i<t; i++){
        cin>>store.at(i);
    }
    sort(store.begin(),store.end(),compare);
    for(auto i: store){
        ans+=i;
    }
    cout<<ans;
    return 0;
}