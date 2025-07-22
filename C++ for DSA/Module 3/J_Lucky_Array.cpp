#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int minvalue = ar[0];

    for (int i = 1; i < n; i++)
    {
        minvalue = min(minvalue, ar[i]);
    }

    // cout << minvalue;

    int min_freq = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == minvalue)
        {
            min_freq++;
        }
    }

    if (min_freq % 2 != 0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }

    return 0;
}