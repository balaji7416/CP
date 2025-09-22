#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s; 
    vector<int> ans;
    auto maxm=INT_MIN;
    for(int i=0; i<s.size(); i++){
       int count=1;
       while(i+1 < s.size() and s.at(i)==s.at(i+1)){
        count+=1;
        i++;
       }
       ans.push_back(count);
    }

    cout<<*max_element(ans.begin(),ans.end())<<endl;
}
