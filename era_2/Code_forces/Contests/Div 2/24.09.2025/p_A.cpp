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
        int n, m;
        cin >> n >> m;
        vector<int> arr(m);
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        int maxel = *max_element(arr.begin(), arr.end());

        if (maxel < m or arr[m - 1] != maxel)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << n - maxel + 1 << endl;
        }
    }

    return 0;
}