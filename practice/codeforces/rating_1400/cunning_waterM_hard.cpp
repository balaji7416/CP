#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
int ipow(int base, int exp)
{
    int ans = 1;
    while (exp--)
        ans *= base;
    return ans;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ref = 1;
        int i = 0;

        while (ref < n)
        {
            ref *= 3;
            i++;
        }

        int req = n;
        int curr = 0;
        map<int, int> freq;

        for (int j = i; j >= 0; j--)
        {

            while (curr <= req)
            {
                curr += ipow(3, j);
                freq[j]++;
            }
            if (curr > req)
            {
                curr -= ipow(3, j);
                if (freq[j] > 0)
                    freq[j]--;
            }
        }

        int deals = 0;
        int coins = 0;

        for (auto &p : freq)
        {
            deals += p.second;
        }
        if (deals > k)
        {
            cout << -1 << endl;
            continue;
        }

        for (auto it = freq.rbegin(); it != freq.rend(); it++)
        {
            if (k - deals < 2)
                break;
            freq[(it->first) - 1] += 3;
            freq.erase(it->first);
            k -= 2;
        }
        for (auto &p : freq)
        {

            while ((p.second)--)
            {
                coins += p.first > 0 ? ipow(3, p.first - 1) * (p.first + 9) : (p.first + 9) / 3;
            }
        }

        cout << coins << endl;
    }

    return 0;
}