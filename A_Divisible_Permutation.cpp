#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> ans(n);
    // filling from end towards start with position of odd
    for (int i = n - 1, j = 1; i >= 0; i -= 2)
    {
        ans[i] = j++;
    }

    // filling from end towards start with position of even
    for (int i = n - 2, j = n; i >= 0; i -= 2)
    {
        ans[i] = j--;
    }   

    // simply printing the valid permutation
    for (auto &num : ans)
    {
        cout << num << " ";
    }

    cout << endl;
};

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