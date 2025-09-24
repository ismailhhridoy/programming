#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int lvl[105][105];
vector<pair<int, int>> mv = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    lvl[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + mv[i].first;
            {
                int cj = par_j + mv[i].second;
                if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
                    q.push({ci, cj});
                    vis[ci][cj] = true;
                    lvl[ci][cj] = lvl[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;
    memset(vis, false, sizeof(vis));
    memset(lvl, -1, sizeof(lvl));
    bfs(si, sj);
    cout << lvl[di][dj];
    return 0;
}