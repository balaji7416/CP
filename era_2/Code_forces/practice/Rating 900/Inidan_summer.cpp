#include<bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int ref = n;
    set<string> treeLeave;
    while(n--){
        string tree,leaf;
        cin>>tree>>leaf;
        treeLeave.insert(tree+" "+leaf);
    }
    cout<<treeLeave.size()<<endl;
}