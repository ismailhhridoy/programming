#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    istringstream iss(s);
    string word;

    while (iss >> word)
    {
        if (word == "Jessica")
        {
           cout << "YES";
           return 0;
        }
        
    }

    cout << "NO";
    

    return 0;
}
