#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        if (n & 1)
        {
            cout << x << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}