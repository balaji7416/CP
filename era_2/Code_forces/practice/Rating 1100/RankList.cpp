#include<bits/stdc++.h>
using namespace std; 

bool compare(int &a,int &b){

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k; cin>>n>>k;
    vector<pair<int,int>> contest;

    while(n--){
        int prob,penality; cin>>prob>>penality;
        contest.push_back({prob,penality});
    }

    sort(contest.begin(),contest.end(),[](auto &a,auto &b){
        return (a.first==b.first? a.second < b.second : a.first>b.first);
    });

    pair<int,int> ref = contest.at(k-1);
    int count=0;
    for(auto pair : contest){
        if(pair == ref) count++;
    }
    cout<<count<<endl;
}