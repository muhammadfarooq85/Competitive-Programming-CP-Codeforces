#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x;
    cin >> x;

    vector<pair<int, int>> digits;
    int totalSum = 0;

    for (int i = 0; i < x.length(); i++) {
        int d = x[i] - '0';
        digits.push_back({d, i == 0});
        totalSum += d;
    }

    if (totalSum <= 9) {
        cout << 0 << "\n";
        return;
    }

    sort(digits.begin(), digits.end(), [](auto &a, auto &b) {
        return a.first > b.first;
    });

    int moves = 0;
    int currentSum = totalSum;

    for (auto &[digit, isFirst] : digits) {
        if (isFirst) continue;
        
        currentSum -= digit;
        moves++;
        
        if (currentSum <= 9) break;
    }

    if (currentSum > 9) {
        for (auto &[digit, isFirst] : digits) {
            if (isFirst) {
                currentSum -= (digit - 1);
                moves++;
                break;
            }
        }
    }

    cout << moves << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}