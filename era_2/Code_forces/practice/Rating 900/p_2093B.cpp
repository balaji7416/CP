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
        string num;
        cin >> num;
        int trail_zeores = 0;
        int leading_non_zero_nums = 0;

        int j = num.size() - 1;

        for (j; j >= 0; j--)
        {
            if (num[j] != '0')
            {
                break;
            }
            trail_zeores++;
        }

        for (int i = j - 1; i >= 0; i--)
        {
            if (num[i] != '0')
            {
                leading_non_zero_nums++;
            }
        }

        cout << leading_non_zero_nums + trail_zeores << endl;
    }

    return 0;
}