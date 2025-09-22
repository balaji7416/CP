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
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr.at(i).first >> arr.at(i).second;
    }

    int maxCapacity = 0;
    int currCapacity = 0;
    for (auto i : arr)
    {
        currCapacity += i.second - i.first;
        maxCapacity = max(maxCapacity, currCapacity);
    }

    cout << maxCapacity << endl;

    return 0;
}