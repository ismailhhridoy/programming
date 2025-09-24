#include <bits/stdc++.h>
using namespace std;
int par[1005];

int find_leader(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find_leader(par[node]);
    par[node] = leader;
    return leader;
}
int main()
{


    memset(par, -1, sizeof(par));
    // current union with leader
    par[0] = 1;
    par[1];
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;


    // find main leader
    cout << find_leader(4) << endl;
    return 0;
}