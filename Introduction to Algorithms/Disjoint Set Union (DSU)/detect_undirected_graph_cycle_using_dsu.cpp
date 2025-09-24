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

    int n, e;
    cin >> n >> e;
    bool is_cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find_leader(a);
        int leaderB = find_leader(b);

        if (leaderA == leaderB)
            is_cycle = true;
        else
            dsu_union(a, b);
    }

    if (is_cycle)
        cout << "cycle detected";
    else
        cout << "NO Cycle";

    return 0;
}