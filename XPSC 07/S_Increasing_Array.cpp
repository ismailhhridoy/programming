#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // if previous element is bigger thatn current element increase it one by one and count the moves one by one (Increase  == Move)
    long long int ar[n];
    long long int move_c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];

        if (i > 0 && ar[i] < ar[i - 1])
        {
            move_c += (ar[i-1] - ar[i]);
            ar[i] = ar[i- 1];
        }

        
    }

    cout << move_c;

    return 0;
}
