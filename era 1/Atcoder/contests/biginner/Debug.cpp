#include<bits/stdc++.h>
using namespace std;
bool findd(string s){
    for(size_t i=0; i<s.size()-1; i++){
        if(s.at(i)=='W' && s.at(i+1)=='A'){
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    string s; cin>>s;
    bool flag=true;
    while(flag){
        flag=false;
        for(size_t i=0; i<s.size()-1; i++){
            if(s.at(i) =='W' && s.at(i+1)== 'A'){
                s.at(i)='A'; s.at(i+1)='C';
                flag=true;
                break;
            }
        }
    }
    cout<<s;
    return 0;
}