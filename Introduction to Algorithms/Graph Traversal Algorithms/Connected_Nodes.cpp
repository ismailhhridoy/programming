#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        vector<int> v;
        bool is_found = false;
        for (int val : adj_list[x])
        {
            v.push_back(val);
        }

        sort(v.begin(), v.end(), greater<int>());

        for (int x : v)
        {
            if (!v.empty())
                cout << x << " ";
        }

        if (v.empty())
            cout << "-1";

        cout << endl;
    }

    return 0;
}