#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    if(sum%2)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        vector<int> v1, v2;
        if(n % 2 == 0)
        {
            for (int i = 0; i < n / 2;i++)
            {
                if(i%2 == 0)
                {
                    v1.push_back(i + 1);
                    v1.push_back(n - i);
                }
                else
                {
                    v2.push_back(i + 1);
                    v2.push_back(n - i);
                }
            }
        }
        else
        {
            for (int i = 0; i < n / 2;i++)
            {
                if(i%2 == 0)
                {
                    v1.push_back(i + 1);
                    v1.push_back(n - i - 1);
                }
                else
                {
                    v2.push_back(i + 1);
                    v2.push_back(n - i - 1);
                }
            }
            if(v1.size() > v2.size())
                v2.push_back(n);
            else
                v1.push_back(n);
        }
        cout << v1.size()<<endl;
        for (int i = 0; i < v1.size();++i)
            cout << v1[i] << " ";
        cout << endl;
        cout << v2.size() << endl;
        for (int i = 0; i < v2.size();++i)
            cout << v2[i] << " ";
        v1.clear();
        v2.clear();
    }
    return 0;
}