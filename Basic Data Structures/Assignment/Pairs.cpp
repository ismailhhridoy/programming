#include <bits/stdc++.h>
using namespace std;
class cmp
{
public:
    bool operator()(pair<string, int> a, pair<string, int> b)
    {
        if (a.first != b.first)
            return a.first < b.first;
        return a.second > b.second;
    }
};

int main()
{

    int n;
    cin >> n;

    vector<pair<string, int>> v;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        cin >> name >> roll;
        v.push_back({name, roll});
    }

    sort(v.begin(), v.end(), cmp());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}