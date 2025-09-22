#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()

int ipow(int base, int exp)
{
    int ans = 1;
    while (exp--)
        ans *= base;
    return ans;
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

        set<int> ans;
        int i = 11;
        int j = 1;
        while (i <= n)
        {
            if (n % i == 0)
            {
                ans.insert(n / i);
            }
            i = ipow(10, ++j) + 1;
                }
        cout << ans.size() << endl;
        if (!ans.size())
            continue;
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}