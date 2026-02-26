#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, d;
    cin >> n >> m >> d;
    int maxBoxesInTowerCanHold = 1 + (d / m);
    int minTowersCanHoldAllTheseBoxes = (n + maxBoxesInTowerCanHold - 1) / maxBoxesInTowerCanHold;
    cout << minTowersCanHoldAllTheseBoxes << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}