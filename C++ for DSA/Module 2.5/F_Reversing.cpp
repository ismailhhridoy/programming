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

    int i, j;
    i = 0;
    j = n - 1;

    while (i < j)
    {
        swap(ar[i], ar[j]);

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}