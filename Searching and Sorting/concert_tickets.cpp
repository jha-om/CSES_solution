#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nline "\n"
/*Knowing of running time*/
clock_t startTime;
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

multiset<int> prices;

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        prices.insert(-x);
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        if (prices.lower_bound(-t) == prices.end())
        {
            cout << "-1" << nline;
        }
        else
        {
            cout << -(*prices.lower_bound(-t)) << nline;
            prices.erase(prices.lower_bound(-t));
        }
    }
}

int main()
{
    startTime = clock();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    // int t;
    // cin >> t;
    // while(t--) {
    // }
    return 0;
}