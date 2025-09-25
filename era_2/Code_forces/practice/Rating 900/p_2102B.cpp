#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()

int quick_pos(vector<int> &arr)
{
    for (auto &i : arr)
    {
        i = abs(i);
    }
    int i = -1;
    int n = arr.size();
    swap(arr[0], arr[n - 1]);

    int piv = arr[n - 1];
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] <= piv)
        {
            ++i;
        }
    }
    ++i;
    return i + 1;
}

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
        int k = quick_pos(arr);
        int mid = (n + 1) / 2;
        // cout << "k: " << k << endl;
        // cout << "mid: " << mid << endl;
        if (k <= mid or ((k == mid + 1) and (n % 2 == 0)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}