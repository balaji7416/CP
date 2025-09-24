#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main() {
   ios::sync_with_stdio(false);

    int t; cin>>t; 
    while(t--){
       int n;  cin>>n; 
        int gpf;
       for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            gpf=i;
            while(n%i==0){
              n/=i;
            }
        }
       }
       if(n>1) cout<<n<<endl;
       else cout<<gpf<<endl;

    }

   return 0;
}