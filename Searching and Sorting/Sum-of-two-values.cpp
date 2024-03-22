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

int N = 2e5;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v.push_back({val, i + 1});
    }
    sort(v.begin(), v.end());

    for (int l = 0, r = n-1; l < r;)
    {
        if (v[l].first + v[r].first == x) {
            cout << v[l].second << " " << v[r].second << nline;
            return;
        }
        if (v[l].first + v[r].first < x) {
            l++;
        } else {
            r--;
        }
    }
    cout << "IMPOSSIBLE" << nline;
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