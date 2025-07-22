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

        string s;
        cin >> s;

        int freq[26] = {0};
        int ballon_received = 0;

        for (int i = 0; i < n; i++)
        {
            int index = s[i] - 'A';

            if (freq[index] == 0)
            {
                ballon_received += 2;
            }
            else
            {
                ballon_received += 1;
            }

            freq[index]++;
        }

        cout << ballon_received << endl;
    }

    return 0;
}