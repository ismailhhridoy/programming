#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

long long dis[1005];
int n, e;
vector<Edge> edge_list;

bool bellman_ford(int src)
{
    for (int i = 1; i <= n; i++)
        dis[i] = LLONG_MAX;
    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    for (auto ed : edge_list)
    {
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
            return true;
    }

    return false;
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int src;
    cin >> src;

    int t;
    cin >> t;
    vector<int> queries(t);
    for (int i = 0; i < t; i++)
        cin >> queries[i];

    if (bellman_ford(src))
        cout << "Negative Cycle Detected\n";
    else
    {
        for (int i = 0; i < t; i++)
        {
            int dest = queries[i];
            if (dis[dest] == LLONG_MAX)
                cout << "Not Possible\n";
            else
                cout << dis[dest] << endl;
        }
    }

    return 0;
}