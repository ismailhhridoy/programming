#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;

        string maxword;
        int max = 0;

        while (ss >> word)
        {
            mp[word]++;

            if (max < mp[word])
            {
                max = mp[word];
                maxword = word;
            }
        }

        cout << maxword << " " << max << endl;
    }

    return 0;
}