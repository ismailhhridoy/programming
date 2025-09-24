#include <bits/stdc++.h>
using namespace std;
int par[1005];
int grp_sz[1005];

int find_leader(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find_leader(par[node]);
    par[node] = leader;
    return leader;
}

// It'll union (connect/set) nodes according to size
void dsu_union(int node1, int node2)
{
    int leader1 = find_leader(node1);
    int leader2 = find_leader(node2);

    if (grp_sz[leader1] >= grp_sz[leader2])
    {
        par[leader2] = leader1;
        grp_sz[leader1] += grp_sz[leader2];
    }
    else
    {
        par[leader1] = leader2;
        grp_sz[leader2] += grp_sz[leader1];
    }
}

int main()
{

    memset(par, -1, sizeof(par));
    memset(grp_sz, 1, sizeof(grp_sz));
    dsu_union(1, 2);
    dsu_union(2, 0);
    dsu_union(3, 1);

    for (int i = 0; i < 6; i++)
    {
        cout << i << " -> " << par[i] << endl;
    }
    

    return 0;
}