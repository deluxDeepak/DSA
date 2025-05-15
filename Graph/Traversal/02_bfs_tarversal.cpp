
#include <bits/stdc++.h>
using namespace std;

vector<int> bfs_traversal(int v, vector<int> adj[])
{
    queue<int> q;
    vector<bool> visited(v, 0);
    q.push(0);
    visited[0] = 1;
    vector<int> ans;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        //    for  neighbour node
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (!visited[adj[node][i]])
            {
                visited[adj[node][i]] = 1;
                q.push(adj[node][i]);
            }
        }
    }
    return ans;
}
int main()
{
    int vertex, edge;
    cout << "Enter the vertex:";
    cin >> vertex;
    vector<int> adj_list[vertex];

    cout << "Enter the edge:";
    cin >> edge;
    for (int i = 0; i < edge; i++)
    {
        cout << "Enter the u v formate.";
        int u, v;
        cin >> u >> v;
        adj_list[v].push_back(u);
        adj_list[u].push_back(v);
    }

    vector<int> result = bfs_traversal(vertex, adj_list);
    cout << "BFS traversal: ";
    for (auto re : result)
    {
        cout << re << " ";
    }

    return 0;
}