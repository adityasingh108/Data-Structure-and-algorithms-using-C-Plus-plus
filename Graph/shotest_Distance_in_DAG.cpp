#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;

void findTopoSort(int node, int vis[], stack<int> &st, vector<pair<int, int>> adj[])
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it.first])
            findTopoSort(it.first, vis, st, adj);
    }
    st.push(node);
}

void shotestpath(int src, int n, vector<pair<int, int>> adj[])
{

    // step 1 : Find the topological sort

    int vis[n] = {0};
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            findTopoSort(i, vis, st, adj);
    }

    // create a distance array and initialize with infinity
    int dist[n];
    for (int i = 0; i < n; i++)
    {
        dist[i] = 1e9;
    }
    dist[src] = 0;

    while (!st.empty())
    {
        int node = st.top();
        st.pop();

        // if the node has been reached previosoly
        if (dist[node] != INF)
        {
            for (auto it : adj[node])
            {
                if (dist[node] + it.second < dist[it.first])
                    dist[it.first] = dist[node] + it.second;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (dist[i] == 1e9)
            cout << "INF";
        else
            cout << dist[i] << " ";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
    }

    shotestpath(0, n, adj);
    return 0;
}