#include<bits/stdc++.h>
using namespace std; 

int main(){
    string s; cin>>s; 
    map<char,int> mapp;
    for(auto i: s){
        mapp[i]++;
    }
    bool flag=true; 
    int count=0;
    for(auto i: mapp){
        if(i.second&1) count++;
        if(count>1) {
            flag=false;
            break;
        }
    }
    if(!flag) cout<<"NO SOLUTION"<<endl;
    else{
        string left="";
        string right="";
        string mid="";
        for(auto i: mapp){
            if(i.second %2 == 0){
                int ref=i.second/2;
                while(ref--){
                    left+=i.first;
                }
            }
            else{
                int reff=i.second;
                while(reff--){
                    mid+=i.first;
                }
            }
        }
        for(int i=left.size()-1; i>=0; i--){
            right+=left.at(i);
        }

        cout<<left+mid+right<<endl;
    }
        
    
}