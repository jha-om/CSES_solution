#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int *x = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (x[i - 1] != x[i])
            cnt++;
    }
    cout << cnt;
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
