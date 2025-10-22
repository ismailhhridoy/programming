#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,k; cin >> x >> y >> k;

    int sub = x - y;
    if (sub < 0)
        sub = -sub;

    if(sub <= k)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}