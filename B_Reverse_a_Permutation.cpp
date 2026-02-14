#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> pos(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        pos[p[i]] = i;
    }

    int target_pos = -1;
    int target_value = -1;

    for (int i = 0; i < n; i++)
    {
        if (p[i] != n - i)
        {
            target_pos = i;
            target_value = n - i;
            break;
        }
    }

    if (target_pos == -1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
        cout << "\n";
        return;
    }

    int value_pos = pos[target_value];

    int l, r;

    if (value_pos > target_pos)
    {
        l = target_pos;
        r = value_pos;
    }
    else
    {
        int max_in_range = -1;
        int max_pos = -1;

        for (int i = 0; i < target_pos; i++)
        {
            if (p[i] > max_in_range)
            {
                max_in_range = p[i];
                max_pos = i;
            }
        }

        l = max_pos;
        r = target_pos - 1;

        if (l > 0)
        {
            int bound = p[l - 1];
            for (int i = target_pos - 1; i >= l; i--)
            {
                if (p[i] > bound)
                {
                    r = i;
                    break;
                }
            }
        }
    }

    reverse(p.begin() + l, p.begin() + r + 1);

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    cout << "\n";
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