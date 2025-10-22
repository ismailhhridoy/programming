#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> v(n+1, false);
    for (int i = 0; i < n-1; i++)
    {
        int num;
        cin >> num;
        v[num] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (v[i] == false)
        {
            cout << i;
            break;
        }
    }

    return 0;
}