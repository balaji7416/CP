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

        bool isAllSame = true;
        char ref = s[0];
        for (auto i : s)
        {
            if (i != ref)
            {
                isAllSame = false;
                break;
            }
        }

        if (isAllSame)
        {
            cout << "NO" << endl;
            continue;
        }
        string temp = s;
        reverse(temp.begin(), temp.end());
        if (s < temp)
        {
            cout << "YES" << endl;
            continue;
        }
        if (k >= 1)
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