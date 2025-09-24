#include<bits/stdc++.h>
#define int long long
using namespace std; 

int32_t main(){
    int n; cin>>n;

    vector<int> set1;
    vector<int> set2;
    vector<int> sett(n);
    for(int i=0; i<n; i++){
        sett.at(i)=i+1;
    }

    int half_sum=n*(n+1)/2;

    if(half_sum&1) cout<<"NO"<<endl;
   
    else{
        cout<<"YES"<<endl;
        half_sum/=2;
        int ref=1;
        for(int i=n-1; i>=0 and ref>0; i--){
            set1.push_back(sett.at(i));
            ref=half_sum-sett.at(i);
            sett.at(i)=0;
            if(ref>0 and ref<n and sett.at(ref-1)==ref) {
                set1.push_back(ref);
                sett.at(ref-1)=0;
                break;
            }
            half_sum=ref;
        }

        cout<<set1.size()<<endl;
        for(int i=set1.size()-1; i>=0; i--){
            cout<<set1.at(i)<<" ";
        }cout<<endl;
    
        cout<<n-set1.size()<<endl;
        for(auto i: sett){
            if(i != 0){
                cout<<i<<" ";
            }
        }cout<<endl;
    }
   

    
}