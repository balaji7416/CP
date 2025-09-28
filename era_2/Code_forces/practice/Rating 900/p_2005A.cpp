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
        string s = "aeiou";
        int i = 0;
        multiset<char> st;
        while (i < n)
        {
            st.insert(s[i % 5]);
            i++;
        }
        for (auto i : st)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}