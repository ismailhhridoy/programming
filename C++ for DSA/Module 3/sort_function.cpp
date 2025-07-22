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

    // sort(ar,ar+n); ascending lower to big
    sort(ar,ar+n, greater<int>()); //descending bigger to lower
    
    for (int i = 0; i < n; i++)
    {
       cout << ar[i] << " ";
    }
    
    return 0;
}