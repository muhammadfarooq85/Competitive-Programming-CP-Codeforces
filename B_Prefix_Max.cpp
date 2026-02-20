#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int result = 0, mx = 0;

    for (auto &x : arr)
    {
        cin >> x;
        mx = max(mx, x);
        result += mx;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int ans2 = 0, mx2 = 0;

            swap(arr[i], arr[j]);

            for (auto &x : arr)
            {
                mx2 = max(mx2, x);
                ans2 += mx2;
            }

            swap(arr[i], arr[j]);

            result = max(result, ans2);
        }
    }

    cout << result << "\n";
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