#include <bits/stdc++.h>
using namespace std;

void generate(vector<string> temp, vector<string> &store, string curr, int k, int count)
{
    if (count == k)
    {
        store.push_back(curr);
        return;
    }
    for (auto i : temp)
    {
        generate(temp, store, curr + i, k, count + 1);
    }
}

int main()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<string> temp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp.at(i);
    }
    vector<string> store;
    generate(temp, store, "", k, 0);

    sort(store.begin(), store.end());
    cout << store.at(x - 1) << endl;
}