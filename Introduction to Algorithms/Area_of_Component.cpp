#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> mv = {{-1,0},{1,0},{0,-1},{0,1}};
int n, m;

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m) return false;
    if(grid[i][j] == '-') return false;
    if(vis[i][j]) return false;
    return true;
}

int dfs(int si, int sj) {
    vis[si][sj] = true;
    int cnt = 1;
    for(auto [dx, dy] : mv) {
        int ci = si + dx, cj = sj + dy;
        if(valid(ci, cj)) {
            cnt += dfs(ci, cj);
        }
    }
    return cnt;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        string row; cin >> row;
        for(int j = 0; j < m; j++) {
            grid[i][j] = row[j];
        }
    }

    int min_area = INT_MAX;
    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == '.' && !vis[i][j]) {
                int area = dfs(i, j);
                min_area = min(min_area, area);
                found = true;
            }
        }
    }

    if(found) cout << min_area << "\n";
    else cout << -1 << "\n";

    return 0;
}