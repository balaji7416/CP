#include<bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n; 
    vector<pair<int,int>> teams(n);
    for(int i=0; i<n; i++){
        cin>>teams.at(i).first>>teams.at(i).second;
    }
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j and teams.at(i).first==teams.at(j).second) ans++;
        }
    }
    cout<<ans<<endl;
}