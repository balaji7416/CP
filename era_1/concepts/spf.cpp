#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main() {
   ios::sync_with_stdio(false);

   int n; cin>>n; 
   vector<int> spf(n+1);
   for(int i=0; i<=n; i++){
    spf.at(i)=i;
   }
   for(int i=2; i*i <= n; i++){
        if(spf.at(i)==i){
            for(int j=i*i; j<=n; j+=i){
                if(spf[j]==j)
                spf.at(j)=i;
            }
        }
   }

   for(int i=0; i<n; i++){
     cout<<i<<"->"<<spf.at(i)<<endl;
   }cout<<endl;



   return 0;
}