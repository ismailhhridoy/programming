#include <bits/stdc++.h>
using namespace std;
int par[100005];
int grp_sz[100005];

int find_leader(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find_leader(par[node]);
    par[node] = leader;
    return leader;
}

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
    for (int i = 0; i < 100005; i++) grp_sz[i] = 1;

    int n, e;
    cin >> n >> e;
    int cycle_edges = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find_leader(a);
        int leaderB = find_leader(b);

        if (leaderA == leaderB)
            cycle_edges++;
        else
            dsu_union(a, b);
    }

    cout << cycle_edges;

    return 0;
}
