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
        int maxLength = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int count = 1;
            int prevCount;
            for (int j = i; j < n and arr[j] == arr[j + 1]; j++)
            {
                if (arr[j] == arr[j + 1])
                {
                    count++;
                    continue;
                }

                prevCount = count;
                count = 1;
                if (prevCount == -1)
                    continue;
                if (prevCount != count)
                {
                    length = 0;
                }
                else
                {
                    length =
                }
            }
        }
    }

    return 0;
}