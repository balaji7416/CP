#include<bits/stdc++.h>
#define int long long
using namespace std; 
void solve(int k){
    int ref=k*k;
    int invalide_cases=4*(k-1)*(k-2);       /* choosing 3x2 rectangles i.e., (k-3)*(k-2)    + choosing  2x3 rectangles i.e., (k-2)*(k-3) 
                                            and each such rectangle contribute exatly 2 knight pairs */

    int total_cases=ref*(ref-1)/2;          // simply choosing 2 squares out of k*k squares
    cout<<total_cases-invalide_cases<<endl;
}

int32_t  main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        solve(i);
    }
}