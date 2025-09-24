#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()

bool isFine(pair<int, int> pair, bool &fine)
{
    bool res;
    if (fine = true)
        bool res = ((pair.first % 2 != 0) and pair.second == 1) or ((pair.first % 2 == 0) and pair.second == 0);
    else
        res = !(((pair.first % 2 != 0) and pair.second == 1) or ((pair.first % 2 == 0) and pair.second == 0));

    if (res)
        fine = true;
    else
        fine = false;
    return res;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second;
        }

        int ans = 0;
        bool fine;
        if (isFine(arr[0], fine))
        {
            ans += arr[0].first;
        }
        else
        {
            ans += arr[0].first - 1;
        }

        for (int i = 1; i < n; i++)
        {
            if (isFine(arr[i], fine))
            {
                ans += arr[i].first - arr[i - 1].first;
            }
            else
            {
                ans += arr[i].first - arr[i - 1].first - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}