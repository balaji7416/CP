#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main() {
   ios::sync_with_stdio(false);

   int t; cin>>t; 
   while(t--){
        int n; cin>>n; 
        int sum=0;
        int first=0;
        int second=1;

        while(second<=n){
            if(second%2==0) sum+=second;
            int temp=second;
            second=first+second;
            first=temp;
          
        }

        cout<<sum<<endl;
           
   }

   return 0;
}