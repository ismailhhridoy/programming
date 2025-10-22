#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    int op = 0;

    for (int i = 0, j = 0; i < s.size() && j < t.size(); i++, j++)
    {
        if(s[i] != t[j])
            op++;
    }
    
    cout << op;
    return 0;
}