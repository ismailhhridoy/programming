#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char>v;
    for (char c : s)
    {
        v.push_back(c);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]=='s' && v[i+1] == 's')
        {
            cout << "hiss";
            return 0;
        }
        
    }

    cout << "no hiss";
    
    
    return 0;
}