#include<bits/stdc++.h>
using namespace std; 

void solve(int discs,int left, int mid, int right){
    if(discs==1) {
        cout<<left<<" "<<right<<endl;
        return ;
    }
    solve(discs-1,left,right,mid);
    cout<<left<<" "<<right<<endl;
    solve(discs-1,mid,left,right);

}
int main(){
    int n; cin>>n; 
    cout<< (1<<n) - 1<<endl;
    solve(n,1,2,3);
    return 0;
}