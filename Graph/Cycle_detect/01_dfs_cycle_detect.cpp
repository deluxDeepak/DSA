#include <iostream>
#include <vector>
using namespace std;
bool dfs(vector<int> adj[], int node, vector<bool> &visited, vector<bool> &path)
{
    visited[node] = 1;
    path[node] = 1;

    for (int i = 0; i < adj[node].size(); i++)
    {
        // If the path visited (then donnt visit twise )
        if (visited[adj[node][i]])
        {
            continue;
        }
        if (dfs(adj, adj[node][i], visited, path))
        {
            return 1;
        }

        if (path[adj[node][i]])
        {
            return 1;
        }
    }

    // wapas niklne se pehle isko zero karna parega
    path[node] = 0;
    return 0;
}

bool detect_cycle(vector<int> adj[], int vertex)
{
    vector<bool> path(vertex, 0);
    vector<bool> visited(vertex, 0);
    for (int i = 0; i < vertex; i++)
    {
        // agr visit nahi hai to visit karo
        if (!visited[i])
        {
            if (dfs(adj, i, visited, path))
            {
                return 1;
            }
        }
    }

    return 0;
}
int main()
{
    // creating the graph directed
    int vertex, edges;
    cout << "Enter the vertex:";
    cin >> vertex;
    vector<int> adjlist[vertex];

    cout << "Enter the edges:";
    cin >> edges;
    for (int i = 0; i < edges; i++)
    {
        cout << "Enter edges in u v fromate. ";
        int u, v;
        cin >> u >> v;
        adjlist[u].push_back(v);
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << "->";
        for (auto result : adjlist[i])
        {
            cout << result << " ";
        }
        cout << endl;
    }
    if (detect_cycle(adjlist, vertex))
        cout << "Cycle detected!" << endl;
    else
        cout << "No cycle found." << endl;


    return 0;
}