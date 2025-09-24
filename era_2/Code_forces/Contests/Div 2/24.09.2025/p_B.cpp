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
        string s;
        cin >> s;
        vector<int> arr(m);
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        int max_black = *max_element(arr.begin(), arr.end());

        vector<int> arr2(1e9 + 1, 0);
        for (int i = 0; i < m; i++)
        {
            arr2[arr[i]] = 1;
        }
        int ref = 1;
        while (ref <= n)
        {
            int i = 0;
            int ptr;
            while (i < ref)
            {
                ptr = 1;
                if (s[i] == 'A')
                {
                    ptr++;
                }
                else
                {
                    while (arr2[ptr + 1] == 1)
                    {
                        ptr++;
                    }
                }
                i++;
            }
            arr2[ptr] = 1;
            max_black = max(max_black, ptr);
            ref++;
        }

        for (int i = 1; i <= max_black; i++)
        {
            if (arr2[i] == 1)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}