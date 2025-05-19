// Topological sort can be find in DAG only
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void dfs(vector<int> adj[], int node, vector<int> &visited, stack<int> &s)
{
    visited[node] = 1;
    for (int i = 0; i < adj[node].size(); i++)
    {
        if (!visited[adj[node][i]])
        {
            dfs(adj, adj[node][i], visited, s);
        }
    }

    // We will push in to the stack after returning
    s.push(node);
}
vector<int> toposort(vector<int> adj[], int vertex)
{

    vector<int> visited(vertex, 0);
    stack<int> s;
    // dfs(adj, 0, visited, s);
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            dfs(adj, i, visited, s);
        }
    }

    vector<int> result;
    while (!s.empty())
    {
        result.push_back(s.top());
        s.pop();
    }

    return result;
}
int main()
{
    int v, e;
    cout << "Enter the size of the vertex";
    cin >> v;
    vector<int> adj_list[v];

    cout << "Enter the number of edges.";
    cin >> e;

    // usiing for loop to store the edges and vertex
    for (int i = 0; i < e; i++)
    {
        int u, v1;
        cout << "Enter the u v formate:";
        cin >> u >> v1;
        adj_list[u].push_back(v1);
    }

    // print the adjency list
    for (int i = 0; i < v; i++)
    {
        cout << i << "->";
        for (auto print : adj_list[i])
        {
            cout << print << " ";
        }
        cout << endl;
    }

    vector<int> result = toposort(adj_list, v);

    cout << "Toposort order: ";
    for (auto result1 : result)
    {
        cout << result1 << " ";
    }
    cout << endl;

    return 0;
}