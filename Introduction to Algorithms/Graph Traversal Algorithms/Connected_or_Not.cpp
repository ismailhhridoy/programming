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
    }

    int q;
    cin >> q;

    while (q--)
    {
        int s, d;
        cin >> s >> d;
        bool is_found = false;
        for (int x : adj_list[s])
        {
            if(x == d)
            {   
                is_found = true;
                break;
            }
        }

        if(is_found || s == d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}