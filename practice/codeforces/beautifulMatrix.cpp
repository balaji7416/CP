#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int32_t main()
{
    ios::sync_with_stdio(false);
    vector<vector<int>> matrix(5, vector<int>(5));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix.at(i).at(j);
        }
    }

    int row, col;
    bool isFound = false;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix.at(i).at(j) == 1)
            {
                row = i;
                col = j;
                isFound = true;
                break;
            }
        }
        if (isFound)
            break;
    }

    cout << abs(2 - row) + abs(2 - col) << endl;
    return 0;
}