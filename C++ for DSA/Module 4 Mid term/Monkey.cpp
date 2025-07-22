#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while (getline(cin, s))
    {
        int fre[26] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                fre[s[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < fre[i]; j++)
            {
                cout << (char)(i + 'a');
            }
        }

        cout << endl;
    }

    return 0;
}