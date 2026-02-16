#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, s, x;
    cin >> n >> s >> x;

    vector<int> a(n);
    int total_sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total_sum += a[i];
    }

    if (total_sum == s)
    {
        cout << "YES\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        int current_sum = total_sum;

        while (current_sum < s)
        {
            current_sum += x;

            if (current_sum == s)
            {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
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