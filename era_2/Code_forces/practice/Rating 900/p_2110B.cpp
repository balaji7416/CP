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
        string s;
        cin >> s;

        int bal = 0;
        bool isBreakable = false;
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] == '(')
                bal++;
            else
                bal--;

            if (bal < 0)
            {
                isBreakable = true;
                break;
            }
        }
        if (!isBreakable)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}