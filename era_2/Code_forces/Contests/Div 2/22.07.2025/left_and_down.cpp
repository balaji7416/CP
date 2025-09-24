#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main() {
   ios::sync_with_stdio(false);
   int t; cin>>t; 
   while(t--){
    int a,b,k; cin>>a>>b>>k;
    if(k>=max(a,b)){
        cout<<1<<endl;
    }
    else{
        int commonFactor = __gcd(a,b);
        if(commonFactor!=1 && a/commonFactor <= k && b/commonFactor <=k){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
   }
   
   return 0;
}