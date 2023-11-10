#include<iostream>

using namespace std;

void solve()
{
    long long n, sum = 0; 
    cin >> n;
    for (int i =0; i < n - 1; i++){
        long long x; cin >> x;
        sum += x;
    }
    cout << (n * (n + 1)) / 2 - sum << endl;
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