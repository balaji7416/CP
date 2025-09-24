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

        int n, m;
        cin >> n >> m;
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1.at(i);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2.at(i);
        }

        sort(v1.begin(), v1.end(), greater<>());
        sort(v2.begin(), v2.end());

        int i = 0;
        int j = 0;
        int k = 0;
        while (i < n and j < n)
        {
            if (v1.at(i) + v2.at(j) >= m)
            {
                k++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        int sum = accumulate(v1.begin(), v1.end(), 0);
        sum += accumulate(v2.begin(), v2.end(), 0);

        sum -= k * m;
        cout << sum << endl;
    }

    return 0;
}