#include<bits/stdc++.h>
#define int long long
using namespace std; 

int32_t  main(){
    int t; cin>>t; 
    while(t--){
        int a,b; cin>>a>>b;
        int ans , start;
        if(a>b){
            if(a&1){
                start=(a-1)*(a-1);
                ans=start+b;
            }
            else{
                start=a*a;
                ans=start-b+1;
            }
        }
        else {
            if(b&1){
                start=b*b;
                ans=start-a+1;
            }
            else{
                start=(b-1)*(b-1);
                ans=start+a;
            }
        }

        cout<<ans<<endl;
    }
}