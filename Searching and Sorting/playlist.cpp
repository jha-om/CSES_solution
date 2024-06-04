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
    vector<long long> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    map<ll, ll> mp;
    ll start = 0, ans = 0;
    for (ll end = 0; end < n; end++) {
        if(mp.find(s[end]) == mp.end()){
            mp.insert({s[end], end});
        } else {
            if(mp[s[end]] >= start) {
                start = mp[s[end]] + 1;
            }
            mp[s[end]] = end;
        }
        ans = max(ans, end - start + 1);
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