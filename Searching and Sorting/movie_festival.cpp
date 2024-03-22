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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end());
    int ans = 1, end = v[0].first;
    for (int i = 1; i < n; i++) {
        if(v[i].second >= end) {
            ans++;
            end = v[i].first;
        }
    }
    cout << ans << nline;
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