#include<iostream>

using namespace std;
#define ll long long

void solve()
{
    ll a, b;
    cin >> a >> b;
    if(a == 0 && b == 0)
        cout << "YES" << endl;
    // else if()
    //     cout << "NO" << endl;
    // idea : if a or(and) b is odd then output is yes,
    // if a or b == 0, then output is no.
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}