#include<bits/stdc++.h>
using namespace std; 

int main(){

    int n, m; cin>>n>>m;
    vector<int> black(n);
    vector<int> white(m);
    
    for(int i=0; i<n; i++){
        cin>>black.at(i);
    }

    for(int i=0; i<m; i++){
        cin>>white.at(i);
    }

    sort(black.begin(),black.end(),greater<int>());
    sort(white.begin(),white.end(),greater<int>());

    int ans=0;

    int i=0;
    while(1){
        if(black.at(i)+white.at(i) > 0 && white.at(i)>0){
            ans+=black.at(i)+white.at(i);
        }
        else if(black.at(i)>0 and white.at(i)<=0){
            ans+=black.at(i);
        }
        if(black.af)
        i++;
    }
    
    return 0;
}  