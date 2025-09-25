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
        vector<vector<int>> arr(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    ans.push_back(arr[i][j]);
                }
            }
            else
            {
                ans.push_back(arr[i][n - 1]);
            }
        }

        int sum = accumulate(ans.begin(), ans.end(), 0);
        int total_Sum = (2 * n) * (2 * n + 1) / 2;

        ans.insert(ans.begin(), total_Sum - sum);
        for (auto &i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}