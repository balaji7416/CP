#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()

void generate(vector<int> arr, vector<int> curr, unordered_map<int, bool> visited, vector<vector<int>> &store)
{
    if (curr.size() == arr.size())
    {
        for (auto i : curr)
        {
            cout << i << " ";
        }
        cout << endl;
        store.push_back(curr);
        return;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (visited[arr.at(i)])
            continue;

        visited[arr.at(i)] = true;
        curr.push_back(arr.at(i));
        generate(arr, curr, visited, store);
        curr.pop_back();

        visited[arr.at(i)] = false;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr.at(i);
        }
        vector<int> curr;
        unordered_map<int, bool> visited(false);
        vector<vector<int>> store;
        generate(arr, curr, visited, store);

        bool possible = false;
        for (auto i : store)
        {
            int speed = 1;
            for (int j = 1; j < i.size(); j++)
            {
                speed = (arr.at(j - 1) / arr.at(j)) * speed;
            }
            if (speed == 1)
            {
                possible = true;
                break;
            }
        }
        // cout << "before store print" << endl;
        // if (store.empty())
        //     cout << "store is emtpy" << endl;
        // for (auto i : store)
        // {
        //     cout << "[";
        //     for (auto j : i)
        //     {
        //         cout << j << " ";
        //     }
        //     cout << "]" << endl;
        // }
        // cout << "after store print" << endl;

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}