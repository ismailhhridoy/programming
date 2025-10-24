#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 1;

    vector<pair<string, string>> v;

    for (int i = 0; i < t; i++)
    {
        string tree, color;
        cin >> tree >> color;
        v.push_back({tree, color});
    }

    for (int i = 0; i < v.size() - 1; i++)
    {
        
        if (i != v.size() && v[i] != v[i + 1])
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
