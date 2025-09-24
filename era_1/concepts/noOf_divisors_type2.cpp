#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main() {
   ios::sync_with_stdio(false);

    int maxN=1e6+1;
    vector<int> spf(maxN);
    for(int i=0; i<maxN; i++){
        spf.at(i)=i;
    }
    for(int i=2; i*i<maxN; i++){
        if(spf.at(i)==i){
            for(int j=i*i; j<maxN; j+=i){
                if(spf.at(j)==j) spf.at(j)=i;
            }
        }
    }

    int t; cin>>t; 
    while(t--){
        int n; cin>>n;
        int ans=1;
        while(n != 1){
            int factor = spf.at(n);
            int count=0;
            while(n%factor == 0){
                count++;
                n/=factor;
            }
            ans*=count+1;
        }
        cout<<ans<<endl;
    }

   return 0;
}