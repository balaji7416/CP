#include<bits/stdc++.h>
#define int long long
using namespace std; 
int modulo(int base, int exp, int mod){
    if(exp==0) return 1;
    int result=1;
    while(exp>0){
        if(exp%2==1){
            result=(result*base)%mod;
        }
        base=(base*base)%mod;
        exp/=2;
    }
    return result;
}
int32_t main(){
    int n ; cin>>n; 
    int mod=1e9+7;
    int ans=modulo(2,n,mod);
    cout<<ans<<endl;
}