#include <bits/stdc++.h>
using namespace std;
void prefix_fun()
{
    int n;
    cin >> n;

    vector<int> ar(n);
    for (int i = 0; i < ar.size(); i++)
    {
        cin >> ar[i];
    }

    vector<int> pre(n);
    pre[0] = ar[0];
    cout << pre[0] << " ";

    for (int i = 1; i < ar.size(); i++)
    {
        pre[i] = pre[i - 1] + ar[i];
        cout << pre[i] << " ";
    }
}

int main()
{

    prefix_fun();

    return 0;
}