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
        string s;
        cin >> s;
        int n = s.size();

        if (n <= 10)
        {
            cout << s << endl;
            continue;
        }
        cout << s[0] << s.size() - 2 << s[n - 1] << endl;
    }

    return 0;
}