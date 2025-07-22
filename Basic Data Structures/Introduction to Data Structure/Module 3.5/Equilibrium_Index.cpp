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

    vector<int> pre(n);
    pre[0] = ar[0];
    cout << "Prefix Sum : ";
    cout << pre[0] << " ";
    

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + ar[i];
        cout << pre[i] << " ";
    }
    
    

    int left_sum = 0;
    int right_sum = 0;

    for (int i = 0; i < n; i++)
    {

        if (i == 0)
        {
            left_sum = 0;
        }
        else
        {
            left_sum = pre[i-1];
        }
        

        right_sum = pre[n - 1] - pre[i];

        cout << endl << "Left Sum = " << left_sum << " " << " Right Sum = " << right_sum << endl;

        if (left_sum == right_sum)
        {
            cout << endl << "Index : " << i;
            break;
        }
    }

    return 0;
}