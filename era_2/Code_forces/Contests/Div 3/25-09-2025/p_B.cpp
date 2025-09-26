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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int maxm = INT_MIN;
        for (int i = 0; i <= n - 2; i += 2)
        {
            maxm = max(arr[i + 1] - arr[i], maxm);
        }
        cout << maxm << endl;
    }

    return 0;
}