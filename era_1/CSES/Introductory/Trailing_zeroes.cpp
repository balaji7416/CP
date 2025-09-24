#include<bits/stdc++.h>
using namespace std; 
int max_exponent(int n, int p){
    int ans=0;
    int ref=p;
    while(p <= n){
        ans+=n/p;
        p*=ref;
    }
    return ans;
}
int main(){
    int n;cin>>n; 
    int ans1=max_exponent(n,5);
    int ans2=max_exponent(n,2);
    cout<<min(ans1,ans2)<<endl;
}