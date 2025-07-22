#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool palindrom = true;
    string reversed = s;
    reverse(reversed.begin(),reversed.end());
    if (s != reversed)
    {
        palindrom = false;
    }

    if (palindrom)
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
    
    
    return 0;
}