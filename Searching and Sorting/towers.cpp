#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define nline "\n"
/*Knowing of running time*/
clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    multiset<ll> top;
    ll ans = 0;
    for (int i = 0; i < n;i++) {
        auto it = top.upper_bound(a[i]);
        if(it == top.end()) {
            ans++;
            top.insert(a[i]);
        } else {
            top.erase(it);
            top.insert(a[i]);
        }
    }
    cout << ans << nline;
}

int main() {
    startTime = clock();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}