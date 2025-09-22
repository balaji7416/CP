#include<bits/stdc++.h>
#define int long long
using namespace std; 

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin>>n; 
    cout<<n<<" ";
    while(n != 1){
        if(n&1){
            n=3*n +1;
            cout<<n<<" ";
        }
        else{
            n/=2;
            cout<<n<<" ";
        }
    }cout<<endl;
    return 0;

}
