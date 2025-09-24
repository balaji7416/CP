#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            cin >> arr[i].second;
        }

        int prev_time = 0;
        int prev_place = 0;
        int points = 0;
        for (int i = 0; i < n; i++)
        {
            points += arr[i].first - prev_time;

            if ((arr[i].first - prev_time) % 2 != (abs(prev_place - arr[i].second) % 2))
                points--;

            prev_time = arr[i].first;
            prev_place = arr[i].second;
        }

        if (prev_time != m)
        {
            points += m - prev_time;
        }
        cout << points << endl;
    }
}