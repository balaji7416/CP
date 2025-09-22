#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main() {
   ios::sync_with_stdio(false);

    int n,k,mod; cin>>n>>k>>mod;
    int ans=1;
    while(k>0){
        if(k&1){
            ans=(ans*n)%mod;
        }
        n=(n*n)%mod;
        k>>=1;
    }
    cout<<ans<<endl;
   return 0;
}
