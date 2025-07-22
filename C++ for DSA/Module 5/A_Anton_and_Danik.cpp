#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int countA = 0;
    int countB = 0;

    string s;
    cin >> s;  

    for (int i = 0; i < n; i++)
    {     

        if (s[i] == 'A')
        {
            countA++;
        }
        else
        {
            countB++;
        }

    }

    if (countA > countB)
    {
        cout << "Anton";
    } 
    else if (countB > countA)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    

    return 0;
}