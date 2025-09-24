#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;     cin>>n; 
    vector<int> temp(n-1);
    for(int i=0; i<n-1; i++){
        cin>>temp.at(i);
    }
    int sum=0;
    for(auto i: temp){
        sum+=i;
    }
    int real_sum=0;
    for(int i=1; i<=n; i++){
        real_sum+=i;
    }

    cout<<real_sum-sum<<endl;

    return 0;
}