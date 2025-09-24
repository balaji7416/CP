#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main() {
   ios::sync_with_stdio(false);

    int n=1e6;
    vector<int> is_prime(n+1,true);
    is_prime.at(0)=is_prime.at(1)=false;


    for(int i=2; i*i<=n; i++){
        if(is_prime.at(i)){
            for(int j=i*i; j<=n; j+=i){
                is_prime.at(j)=false;
            }
        }
    }

    int N; cin>>N;
    int ans=0; 
    for(int i=1; i*i <= N; i++){
        if(N%i == 0){
           if(is_prime.at(i)) ans+=i;
           int other = N/i;
           if(other != i && is_prime.at(other)) ans+=other;
        }
    }
    cout<<ans<<endl;


    return 0;
}