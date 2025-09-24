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
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<int> hor(n);
        vector<int> ver(m);

        for (int i = 0; i < n; i++)
        {
            cin >> hor[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> ver[i];
        }
        int ans = 0;
        for (int i : hor)
        {
            if (i < y)
            {
                ans++;
            }
        }

        for (int j : ver)
        {
            if (j < x)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}