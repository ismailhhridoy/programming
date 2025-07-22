#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int sum = 0;
        int small_sum = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum = ar[i] + ar[j] + j - i;
                if (small_sum > sum)
                {
                    small_sum = sum;
                }
            }
        }

        cout << small_sum << endl;
    }

    

    return 0;
}