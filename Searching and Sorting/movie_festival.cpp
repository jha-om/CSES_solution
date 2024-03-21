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
    int n;
    cin >> n;
    set<pair<int, int>> s;
    while(n--) {
        int a, b;
        cin >> a >> b;
        s.insert({a, 1});
        s.insert({b, -1});
    }
    int c = 0, mc = 0;
    for (auto x : s) {
        c += x.second;
        mc = max(mc, c);
    }
    cout << mc << nline;
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