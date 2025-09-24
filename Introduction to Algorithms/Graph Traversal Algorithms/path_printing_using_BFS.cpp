#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005]; // array of vector
int vis[1005];
int lvl[1005];
int par[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    lvl[src] = 0;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();

        for (int child : adj_list[p])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                lvl[child] = lvl[p] + 1;
                par[child] = p;
            }
        }
    }
}

int main()
{
    // adjacency list
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(lvl, -1, sizeof(lvl));
    memset(par, -1, sizeof(par));

    // BFS to check node

    int src, dst;
    cin >> src >> dst;

    bfs(src);
    vector<int>path;
    int node = dst;
    while (node != -1)
    {
        path.push_back(node);
        node = par[node];
    }
    reverse(path.begin(),path.end());
    for(int x:path)
    {
        cout << x << " ";
    }

    return 0;
}