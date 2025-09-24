#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
int vis[1005];

int dfs(int src)
{
    // No base case because we're only printing if not visited
    int cnt = 1;
    vis[src] = true;
    for (int child : adj_list[src])
    {
        if (!vis[child])
        {
            cnt = cnt + dfs(child);
        }
    }

    return cnt;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    
    vector<int>sizes;

    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
             int sz = dfs(i);
             sizes.push_back(sz);
        }
    }

    sort(sizes.begin(), sizes.end());

    for (int val : sizes)
    {
        cout << val << " ";
    }
    

    return 0;
}