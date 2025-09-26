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
        vector<int> arr(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int negCount = 0, count0 = 0;
        for (auto i : arr)
        {
            if (i == -1)
            {
                negCount++;
            }
            else if (i == 0)
            {
                count0++;
            }
        }
        ans += count0;
        negCount % 2 == 0 ? ans += 0 : ans += 2;
        cout << ans << endl;
    }

    return 0;
}