#include <bits/stdc++.h>
using namespace std;
vector <int> adj_list[1005];
int vis[1005];

void dfs(int src)
{
    // No base case because we're only printing if not visited
    cout << src << " ";
    vis[src] = true;
    for (int child : adj_list[src])
    {
        if(!vis[child])
            dfs(child);
    }
    
}

int main()
{
    int n,e; cin >> n >> e;
    while (e--)
    {
        int a,b; cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);        
    }
    
    dfs(0);
    return 0;
}