#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string arr;
        cin >> arr;
        bool isPossible = true;

        int count = 0;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] == '1')
            {
                count++;
            }
        }
        if (count >= k)
            isPossible = false;

        if (isPossible)
            for (int j = k; j < n; j++)
            {
                if (arr[j - k] == '1')
                    count--;
                if (arr[j] == '1')
                    count++;

                if (count >= k)
                {
                    isPossible = false;
                    break;
                }
            }

        if (!isPossible)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<int> ans(n, -1);
        int ref = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == '1')
            {
                ans[i] = ref++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == '0')
            {
                ans[i] = ref++;
            }
        }
        cout << "YES" << endl;
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}