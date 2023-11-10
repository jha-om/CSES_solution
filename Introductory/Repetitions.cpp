#include<iostream>

using namespace std;

#define ll long long

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    ll ans = 0, cnt = 1;
    for (int i = 1; i < n;i++)
    {
        if(s[i-1] ==s[i])
            cnt++;
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    // int t;
    // cin >> t;
    // while(t--)
    // {
    // }
    return 0;
}