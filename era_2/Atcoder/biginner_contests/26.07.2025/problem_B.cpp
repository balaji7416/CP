#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main()
{
    ios::sync_with_stdio(false);
    string s;
    cin >> s;

    vector<int> temp;
    bool iscontains = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '#')
        {
            temp.push_back(i);
            iscontains = true;
        }
    }
    if (!iscontains)
    {
        s.at(0) = 'o';
        cout << s << endl;
        return 0;
    }
    int maxm = *max_element(temp.begin(), temp.end());
    for (int i : temp)
    {
        if (i > 0 and i < s.size() and s.at(i - 1) != '#')
        {
            s.at(i - 1) = 'o';
        }
    }
    if (maxm < s.size() - 1)
    {
        s.at(maxm + 1) = 'o';
    }
    cout << s << endl;
    return 0;
}