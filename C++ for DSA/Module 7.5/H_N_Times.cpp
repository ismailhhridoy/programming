#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;

        for (int i = 1; i <= n; i++)
        {
            if (i == n)
            {
                cout << c << endl;
            } else
            {
                cout << c << ' ';
            }

            
        }
    }

    return 0;
}