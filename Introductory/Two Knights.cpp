#include<iostream>
 
using namespace std;
 
#define ll long long
 
void solve()
{
    int n;
    cin>>n;
    for (int k = 1; k <= n;++k)
    {
        ll k1 = k * k, k2 = k1 * (k1 - 1) / 2;
        if(k > 2)
            k2 -= 4 * (k - 1) * (k - 2);
        cout << k2 << endl;
    }
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
