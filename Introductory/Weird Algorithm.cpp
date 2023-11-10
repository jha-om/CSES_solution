#include<iostream>

using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    if (n == 1)
        cout << n;
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n = n / 2;
            if (n == 1)
                cout << n << " ";
        }
        else
            n = n * 3 + 1;
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