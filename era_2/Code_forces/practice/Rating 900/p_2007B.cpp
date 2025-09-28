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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max_el = *max_element(arr.begin(), arr.end());
        while (m--)
        {
            char a;
            int b, c;
            cin >> a >> b >> c;
            if (a == '+')
            {
                if (max_el >= b and max_el <= c)
                {
                    cout << ++max_el << " ";
                }
                else
                {
                    cout << max_el << " ";
                }
            }
            else
            {
                if (max_el >= b and max_el <= c)
                {
                    cout << --max_el << " ";
                }
                else
                {
                    cout << max_el << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}