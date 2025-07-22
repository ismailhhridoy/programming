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

    int q;
    cin >> q;

    sort(ar.begin(), ar.end());

    while (q--)
    {
        int val;
        cin >> val;

        bool flag = false;

        int l = 0;
        int r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ar[mid] == val)
            {
                flag = true;
                break;
            }
            else if (ar[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}