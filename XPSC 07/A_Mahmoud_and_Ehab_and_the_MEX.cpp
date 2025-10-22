#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x; cin >> n >> x;
    int set[101] = {0};

    for (int i = 0; i < n; i++)
    {
        int num; cin >> num;
        set[num] = 1;
    }

    int opr = 0;

    for (int i = 0; i < x; i++)
    {
        if(set[i] == 0)
            opr++;
    }

    if(set[x] == 1)
        opr++;

    cout << opr;    
    

    return 0;
}