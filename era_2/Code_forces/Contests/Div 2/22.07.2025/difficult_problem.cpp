#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()



int32_t main() {
   ios::sync_with_stdio(false);
   int t; cin>>t;

   while(t--){
    string s; cin>>s;
    map<char, int> freq;
    for(auto c: s){
        freq[c]++;
    };
    string ns = "";
    for(auto i=freq.rbegin(); i != freq.rend(); i++){
        for(int j=0; j<i->second; j++){
            ns+=i->first;
        }
    };
    cout<<ns<<endl;
   }
   return 0;
}