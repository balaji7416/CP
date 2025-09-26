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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int x = 0, y = 0;
        bool possible = false;
        for (int i = 0; i < 21; i++)
            for (auto i : s)
            {
                if (i == 'E')
                {
                    x++;
                }
                else if (i == 'W')
                {
                    x--;
                }
                else if (i == 'N')
                {
                    y++;
                }
                else if (i == 'S')
                {
                    y--;
                }

                if (x == a and y == b)
                {
                    possible = true;
                    break;
                }
            }

        possible ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}