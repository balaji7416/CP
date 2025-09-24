#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()

int noOf_divisors(int n){

   int ans=0;
   for(int i=1; i*i <=n; i++){
      if(n%i == 0){
     if(n/i != i) ans+=2;
     else ans+=1; 
      }
   }
   return ans;
}
int32_t main() {
   ios::sync_with_stdio(false);
    int range;cin>>range;
    int max_div=1;
    int num=1;
   for(int i=1; i<=range; i++){
    if(noOf_divisors(i)>=max_div){
        max_div=noOf_divisors(i);
        num=i;
    }
   }
   cout<<num<<" " <<max_div<<endl;
  
}