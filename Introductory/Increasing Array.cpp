#include<iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long sum = 0;
    int maxi = a[0];
    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, a[i]);
        sum += maxi - a[i];
    }
    cout << sum << endl;

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