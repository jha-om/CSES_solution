#include<iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n == 2 || n == 3)
    {
        cout << "NO SOLUTION\n";
        return;
    }
    else if(n % 2 != 0)
    {
        for (int i = n; i >= 1; i--)
        {
            if(i % 2 == 0)
                cout << i << " ";
        }
        for (int i = n; i >= 1; i--)
        {
            if(i % 2)
                cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            if(i % 2)
                cout << i << " ";
        }
        for (int i = n; i >= 1; i--)
        {
            if(i % 2 == 0)
                cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}