#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 5; n / i >= 1; i *=5) {
        sum += n / i;
    }
    cout << sum << endl;

    return 0;
}