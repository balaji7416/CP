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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> count(n + 1, 0);
        int kCount = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count[arr[i]]++;
            if (arr[i] == k)
                kCount++;
        }
        int zercount = 0;

        vector<int> mexSet;
        for (int i = 0; i < count.size(); i++)
        {
            if (count[i] == 0)
            {
                mexSet.push_back(i);
            }
        }
        sort(mexSet.begin(), mexSet.end());
        int ans = 0;
        if (count[k] == 0)
            ans = find(mexSet.begin(), mexSet.end(), k) - mexSet.begin();

        else
        {
            int ref = 0;
            for (int i = 0; i < kCount; i++)
            {
                if (ref < mexSet.size())
                    mexSet[ref] = INT_MAX;
                ref++;
            }
            mexSet.push_back(k);
            sort(mexSet.begin(), mexSet.end());
            ans = find(mexSet.begin(), mexSet.end(), k) - mexSet.begin() + kCount;
        }
        cout << ans << endl;
    }

    return 0;
}