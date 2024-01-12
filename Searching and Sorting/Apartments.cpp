#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int MAX = 2e5;
void solve()
{
    int n, m, k, a[MAX], b[MAX];
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0, ans = 0;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else
        {
            if (a[i] - b[j] > k)
                j++;
            else
                i++;
        }
    }
    cout << ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    // }
    return 0;
}