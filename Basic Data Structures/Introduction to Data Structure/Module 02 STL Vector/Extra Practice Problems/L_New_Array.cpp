#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < b.size(); i++)
    {
        cin >> b[i];
    }

    vector<int> c;
    c.insert(c.end(), b.begin(), b.end());
    c.insert(c.end(), a.begin(), a.end());

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}