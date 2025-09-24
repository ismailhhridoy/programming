#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj_l[n]; // array of vector

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_l[a].push_back(b);
        adj_l[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "---> ";
        for (int val : adj_l[i])
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}