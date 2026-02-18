#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, h, l;
    cin >> n >> h >> l;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (h > l)
    {
        swap(h, l);
    }

    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= h)
        {
            c1++;
        }
        if (arr[i] <= l)
        {
            c2++;
        }
    }

    cout << min(c2 / 2, c1) << endl;
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