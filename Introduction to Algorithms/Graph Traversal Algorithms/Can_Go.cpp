#include <bits/stdc++.h>
using namespace std;
int n, m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> mv = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj, bool &is_found)
{
    vis[si][sj] = true;
    if (grid[si][sj] == 'B')
    {
        is_found = true;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int ci = si + mv[i].first;
        int cj = sj + mv[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'B'))
        {    dfs(ci, cj,is_found);
            if (is_found) return; 
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, ei, ej;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'B')
            {
                ei = i;
                ej = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    bool is_found = false;
    dfs(si, sj, is_found);

    cout << (is_found ? "YES\n" : "NO\n");

    return 0;
}