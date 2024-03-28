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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll cost = 0;
    for (int i = 0; i < n;i++) {
        cost += abs(v[n / 2] - v[i]);
    }
    cout << cost << nline;
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