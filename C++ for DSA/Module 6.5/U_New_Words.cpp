#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count_E = 0, count_G = 0, count_Y = 0, count_P = 0, count_T = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }

        if (s[i] == 'E')
        {
            count_E++;
        }
        if (s[i] == 'G')
        {
            count_G++;
        }
        if (s[i] == 'Y')
        {
            count_Y++;
        }
        if (s[i] == 'P')
        {
            count_P++;
        }
        if (s[i] == 'T')
        {
            count_T++;
        }
    }

    int min_count = count_E;

    if (count_G < min_count)
    {
        min_count = count_G;
    }
    
    if (count_Y < min_count)
    {
        min_count = count_Y;
    }

    if (count_P < min_count)
    {
        min_count = count_P;
    }

    if (count_T < min_count)
    {
        min_count = count_T;
    }

    cout << min_count;

    return 0;
}