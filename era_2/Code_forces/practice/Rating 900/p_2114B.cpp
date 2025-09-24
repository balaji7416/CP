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
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (auto i : s)
        {
            if (i == '0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
        int min_good_pairs = (abs(c1 - c0)) / 2;
        int max_good_pairs = (c1 / 2) + (c0 / 2);

        if (k < min_good_pairs or k > max_good_pairs)
        {
            cout << "NO" << endl;
            continue;
        }
        if ((k % 2) != (max_good_pairs % 2))
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}