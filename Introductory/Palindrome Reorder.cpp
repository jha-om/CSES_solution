#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int freq[26] = {0}, cnt = 0;
    for (int i = 0; i < s.length();++i)
        freq[s[i] - 'A']++;
    for (int i = 0; i < 26;++i) {
        if(freq[i]&1)
            cnt++;
    }
    if(cnt > 1) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    string ans;
    for (int i = 0; i < 26; i++)
    {
        if((freq[i]&1)^1) {
            for (int j = 0; j < freq[i]/2; j++)
            {
                ans += (i + 'A');
            }
        }
    }
    cout << ans;
    for (int i = 0; i < 26;i++)
    {
        if(freq[i]&1){
            for (int j = 0; j < freq[i];j++){
                cout << (char)('A' + i);
            }
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    // int t;
    // cin >> t;
    // while(t--) {
    // }
    return 0;
}