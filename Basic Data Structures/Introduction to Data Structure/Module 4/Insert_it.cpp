#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> va(n);
    for (int i = 0; i < n; i++)
    {
        cin >> va[i];
    }

    int m;
    cin >> m;

    vector<int> vb(m);
    for (int i = 0; i < m; i++)
    {
        cin >> vb[i];
    }

    int x;
    cin >> x;

    va.insert(va.begin() + x, vb.begin(), vb.end());

    for (int i = 0; i < va.size(); i++)
    {
        cout << va[i] << " ";
    }

    return 0;
}