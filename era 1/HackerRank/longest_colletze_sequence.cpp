#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()

unordered_map<int,int> mapp;
int collatze_len(int n){
    if(n==0) return 0;
    else if(mapp.count(n)) return mapp[n];
    else if(n&1) mapp[n]=1+collatze_len(3*n +1);
    else mapp[n]=1+collatze_len(n/2);

    return mapp[n];
}
int32_t main() {
   ios::sync_with_stdio(false);
   
   int t; cin>>t; 
   while(t--){
        int n; cin>>n; 
        int max_len=0 , ans=1;
        for(int i=3; i<=n; i++){
            int len=collatze_len(i);
            if(len>max_len){
                max_len=len;
                ans=i;
            }
        }
        cout<<ans<<endl;
   }

   

   return 0;
}