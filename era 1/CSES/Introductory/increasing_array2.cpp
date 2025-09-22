#include<bits/stdc++.h>
#define int long long
using namespace std; 
int32_t main(){
    int n; cin>>n; 
    vector<int> temp(n);
    for(int i=0; i<n; i++){
        cin>>temp.at(i);
    }
    int ans=0; 
    for(int i=1; i<n; i++){
        if(temp.at(i) < temp.at(i-1)){
            ans+=temp.at(i-1) - temp.at(i);
            temp.at(i)=temp.at(i-1);
        }
    }
    cout<<ans<<endl;
}