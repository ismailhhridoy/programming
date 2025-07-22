#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    return a;
}

int main()
{
    int *b = fun();

    int b_new[7];
    for (int i = 0; i < 5; i++)
    {
        b_new[i] = b[i];
    }

    b_new[5] = 7;
    b_new[6] = 7;

    delete [] b;

    for (int i = 0; i < 7; i++)
    {
        cout << b_new[i] << " ";
    }

    return 0;
}