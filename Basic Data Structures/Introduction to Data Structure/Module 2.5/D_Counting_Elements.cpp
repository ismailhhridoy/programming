#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ar(n);
    for (int i = 0; i < ar.size(); i++)
    {
        cin >> ar[i];
    }

    int count = 0;

    for (int i = 0; i < ar.size(); i++)
    {
        for (int j = 0; j < ar.size(); j++)
        {
            if (ar[i] + 1 == ar[j])
            {
                count++;
                break;
            }
        }
    }

    cout << count;

    return 0;
}