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
        int n, s;
        cin >> n >> s;

        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp.at(i);
        }

        int count1 = count(temp.begin(), temp.end(), 1);
        int count2 = count(temp.begin(), temp.end(), 2);
        int sum = accumulate(temp.begin(), temp.end(), 0);
        if ((s & 1 and count1 == 0) or sum >= s)
        {
            for (auto i : temp)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
        }
    }

    return 0;
}