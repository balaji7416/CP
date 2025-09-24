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
        int n, x;
        cin >> n >> x;

        bool flag = false;
        if (x == n)
        {
            flag = true;
        }

        for (int i = 0; i < n; i++)
        {
            if (flag)
            {
                cout << i << " ";
                continue;
            }
            if (i != x)
            {
                cout << i << " ";
            }
        }

        if (!flag)
            cout << x << endl;
        else
        {
            cout << endl;
        }
    }

    return 0;
}