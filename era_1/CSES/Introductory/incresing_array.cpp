#include<bits/stdc++.h>
#define int long long
using namespace std; 

int max_index(vector<int> temp){
    int maxm=INT_MIN;
    int max_index;
    for(int i=0; i<temp.size(); i++){
        if(temp.at(i) > maxm){
            maxm=temp.at(i);
             max_index=i;
        }
    }
    return max_index;
}

int32_t main(){
    int n; cin>>n; 
    vector<int> temp(n);
    for(int i=0; i<n; i++){
        cin>>temp.at(i);
    }
    int ans=0;
    while(temp.at(0) !=0 ){
        int index=max_index(temp);
        int maxm=temp.at(index);
        for(int i=index; i<temp.size(); i++){
            if(temp.at(i) != 0)
            ans+=maxm-temp.at(i);

            temp.at(i)=0;
        }
    }

    cout<<ans<<endl;
}