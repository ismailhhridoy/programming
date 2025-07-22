#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int max_num = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        max_num = max(max_num, ar[i]);
    }

    cout << max_num;

    return 0;
}