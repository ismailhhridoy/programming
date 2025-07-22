#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++)
    {
        string s, t;
        cin >> s >> t;

        for (int i = 0; i < s.size() || i < t.size(); i++)
        {
            if (i < s.size())
            {
                cout << s[i];
            }
            
            if (i < t.size())
            {
                cout << t[i];
            }
        }

        cout << endl;
    }

    return 0;
}