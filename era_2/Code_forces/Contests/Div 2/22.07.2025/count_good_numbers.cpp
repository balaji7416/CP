#include <bits/stdc++.h>
using namespace std;

vector<long long> primes;
set<long long> goodNums;

void generate(int index, long long current) {
    if (current > 1e18) return;
    if (index == primes.size()) {
        if (current > 1) goodNums.insert(current);
        return;
    }

    generate(index + 1, current); // Skip
    long long temp = current;
    while (temp <= 1e18 / primes[index]) {
        temp *= primes[index];
        generate(index + 1, temp);
    }
}

int main() {
    // 1. Get primes ≥ 10 up to 100
    for (int i = 2; i <= 100; ++i) {
        cout<<"iteration "<<i<<endl;
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j)
            if (i % j == 0) isPrime = false;
        if (isPrime && i >= 10)
            primes.push_back(i);
    }

    // 2. Generate all good numbers
    generate(0, 1);
    vector<long long> sortedGoodNums(goodNums.begin(), goodNums.end());
    cout<<"done counting";

    // 3. Answer queries
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        auto low = lower_bound(sortedGoodNums.begin(), sortedGoodNums.end(), l);
        auto high = upper_bound(sortedGoodNums.begin(), sortedGoodNums.end(), r);
        cout << (high - low) << '\n';
    }

    return 0;
}
