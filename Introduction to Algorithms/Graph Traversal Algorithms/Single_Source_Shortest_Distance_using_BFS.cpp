#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005]; // array of vector
int vis[1005];
int lvl[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    lvl[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                lvl[child] = lvl[par] + 1;
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

    // BFS to check node

    int src, dst;
    cin >> src >> dst;

    bfs(src);

    cout << lvl[dst];

    return 0;
}