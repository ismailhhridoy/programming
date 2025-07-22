#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int tc = 0; tc < t; tc++)
    {
        int n;
        cin >> n;

        int s;
        cin >> s;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        bool found = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (ar[i] + ar[j] + ar[k] == s)
                    {
                        found = true;
                        break;
                    }
                }

                if (found)
                {
                    break;
                }
            }
            if (found)
            {
                break;
            }
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}