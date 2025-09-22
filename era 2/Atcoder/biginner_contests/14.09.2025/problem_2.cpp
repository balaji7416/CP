#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> doors(n);
    for (int i = 0; i < n; i++)
    {
        cin >> doors[i];
    }
    int rooms = 0;
    int i = 0, j = n - 1;
    while (i < n and doors[i] != 1)
    {
        rooms++;
        i++;
    }
    while (j > i and doors[j] != 1)
    {
        rooms++;
        j--;
    }
    cout << n + 1 - (rooms + 2) << endl;

    return 0;
}