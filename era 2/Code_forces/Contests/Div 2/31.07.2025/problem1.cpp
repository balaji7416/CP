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
        int n;
        cin >> n;
        multiset<int> temp;
        for (int i = 0; i < n; i++)
        {
            int ref;
            cin >> ref;
            temp.insert(ref);
        }
        int count0 = temp.count(0);

        int ans = accumulate(temp.begin(), temp.end(), 0) + count0;
        cout << ans << endl;
    }
    return 0;
}