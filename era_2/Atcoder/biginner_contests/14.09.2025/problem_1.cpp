#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main()
{
    ios::sync_with_stdio(false);
    int x, c;
    cin >> x >> c;
    int ans = 1000 * ((x / (1000 + c)));

    cout << ans << endl;
    return 0;
}