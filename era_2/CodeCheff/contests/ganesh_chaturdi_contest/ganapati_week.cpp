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
    cin.ignore();
    while (t--)
    {
        string date;
        getline(cin, date);

        bool isGaneshWeek = true;

        string day = date.substr(0, 2);
        string mon = date.substr(3, 3);
        string year = date.substr(7, 4);

        if (!((stoi(day) >= 1 and stoi(day) <= 6) or (stoi(day) >= 27 and stoi(day) <= 31)))
            isGaneshWeek = false;
        else if (mon != "SEP" and mon != "AUG")
            isGaneshWeek = false;
        else if (stoi(year) != 2025)
            isGaneshWeek = false;

        isGaneshWeek ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}