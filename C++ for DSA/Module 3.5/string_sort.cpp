#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int fre[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        fre[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            for (int j = 0; j < fre[i]; j++)
            {
                cout << (char)(i + 'a');
            }
        }
    }   

    return 0;
}