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
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());

    int cnt = 0;
    int i = 0, j = n - 1;
    while(i < j) {
        if(p[i] + p[j] <= x) {
            i++;
            j--;
        } else {
            j--;
        }
        cnt++;
    }
    if(i == j)
        cnt++;
    cout << cnt << nline;
}

int main()
{
    startTime = clock();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
    return 0;
}