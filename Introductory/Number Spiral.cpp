#include<iostream>
 
using namespace std;
 
#define int long long
 
void solve()
{
    int row, col;
    cin >> row >> col;
    int ans = 0;
    if(col > row)
    {
        if(col % 2 == 0)
        {
            col--;
            ans = col*col + row;
        }
        else
            ans = col*col - row + 1;
    }
    else
    {
        if(row % 2 == 0)
            ans = row*row - col + 1;
        else
        {
            row--;
            ans = row*row + col;
        }
    }
    cout << ans << endl;
}
 
signed main()
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