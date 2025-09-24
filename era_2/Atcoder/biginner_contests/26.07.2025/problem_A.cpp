#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main()
{
    ios::sync_with_stdio(false);
    int n, l, r;
    cin >> n >> l >> r;

    string s;
    cin >> s;

    bool isO = true;
    for (int i = l - 1; i < r; i++)
    {
        if (s.at(i) != 'o')
        {
            isO = false;
            break;
        }
    }
    isO ? cout << "Yes" : cout << "No" << endl;
    return 0;
}