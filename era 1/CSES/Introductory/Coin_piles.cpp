#include<bits/stdc++.h>
#define int long long
using namespace std; 

int32_t main(){
    int t; cin>>t; 
    while(t--){
        int a,b; cin>>a>>b;
        int maxm=max(a,b);
        int minm=min(a,b);
         if((a+b)%3==0 and maxm<=2*minm){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}