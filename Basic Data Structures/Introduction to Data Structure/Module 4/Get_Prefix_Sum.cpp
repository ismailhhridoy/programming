#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    vector<long long int> pre(n);
    pre[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + ar[i];
    }

    reverse(pre.begin(), pre.end());

    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
    

        return 0;
}