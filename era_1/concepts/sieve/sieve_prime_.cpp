#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main() {
   ios::sync_with_stdio(false);

   int n; cin>>n;
   vector<bool> is_prime(n+1,true);
   is_prime.at(0)=is_prime.at(1)=false;

   for(int i=2; i*i <= n; i++){
        if(is_prime.at(i)){
            for(int j=i*i; j<=n; j+=i){
                is_prime.at(j) = false;
            }
        }
   }
//    for(int i=0 ; i<=n; i++){
//     if(is_prime.at(i)) cout<<i<<" ";
//    }cout<<endl;
is_prime.at(99) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
is_prime.at(97) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

   return 0;
}
