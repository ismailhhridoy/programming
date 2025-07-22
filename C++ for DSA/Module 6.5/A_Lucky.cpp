#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int sum_first = 0;
        int sum_last = 0;
        
        // convert to number
        for (int i = 0; i < 3; i++)
        {
            sum_first += s[i] - '0';
        }
        
        for (int i = 3; i < 6; i++)
        {
            sum_last += s[i] - '0';
        }

        sum_first == sum_last ? cout << "YES" << endl : cout << "NO" << endl;
        
    }
    
    return 0;
}