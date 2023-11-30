#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll *p = new ll[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }
    ll ans = INT_MAX;
    ll curr = 0;
    for (int i = 0; i < (1 << n); ++i)
    {
        ll c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                c += p[j];
        }
        curr = abs(sum - 2 * c);
        ans = min(ans, curr);
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while(t--) {
    // }
    solve();
    return 0;
}