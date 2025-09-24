#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> stk;
    for(int i=0; i<100; i++){
        stk.push(0);
    }
    int n; cin>>n; 
    cin.ignore();
    vector<string> temp(n);

    for(int i=0; i<n; i++){
        getline(cin,temp.at(i));
    }

    for(int i=0; i<temp.size(); i++){
        if(temp.at(i).at(0)=='2'){
            cout<<stk.top()<<endl;
            stk.pop();
        }
        else if(temp.at(i).at(0)=='1'){
            int refff;
            auto ref=temp.at(i).substr(2);
            refff=stoi(ref);
            stk.push(refff);
        }
    }
    return 0;
}