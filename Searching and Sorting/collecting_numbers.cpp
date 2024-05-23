#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nline "\n"
/*Knowing of running time*/
clock_t startTime;
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

void solve()
{
    // idea -- jo value jis position pe honi chahiye thi, usko vha rkhna ek nye vector mea;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> pos(n);
    for (int i = 0; i < n; i++)
    {
        pos[a[i] - 1] = i;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << pos[i] << " ";
    // }
    int round = 1;
    for (int i = 1; i < n; i++)
    {
        if (pos[i] < pos[i - 1])
        {
            round++;
        }
    }
    cout << round << nline;
}

int main()
{
    startTime = clock();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    // int t;
    // cin >> t;
    // while(t--) {
    // }
    return 0;
}