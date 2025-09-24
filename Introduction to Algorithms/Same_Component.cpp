#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
vector<pair<int, int>> mv = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return false;
    if (grid[i][j] == '-') return false;
    if (vis[i][j]) return false;
    return true;
}

bool dfs(int si, int sj, int ei, int ej) {
    if (si == ei && sj == ej) return true;
    vis[si][sj] = true;
    for (int k = 0; k < 4; k++) {
        int ci = si + mv[k].first;
        int cj = sj + mv[k].second;
        if (valid(ci, cj)) {
            if (dfs(ci, cj, ei, ej)) return true;
        }
    }
    return false;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    int si, sj, ei, ej;
    cin >> si >> sj;
    cin >> ei >> ej;
    if (grid[si][sj] == '-' || grid[ei][ej] == '-') {
        cout << "NO\n";
        return 0;
    }
    if (dfs(si, sj, ei, ej)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
