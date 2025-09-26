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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> arrA;
        vector<int> arrB;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
            {
                arrA.push_back(i);
            }
            else
            {
                arrB.push_back(i);
            }
        }

        int costA = 0, costB = 0;
        if (arrA.size() == 0 || arrB.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < arrA.size() - 1; i++)
        {
            costA += arrA[i + 1] - arrA[i] - 1;
        }
        for (int j = 0; j < arrB.size() - 1; j++)
        {
            costB += arrB[j + 1] - arrB[j] - 1;
        }
        cout << min(costA, costB) << endl;
    }
    return 0;
}