#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <climits>
using namespace std;
void dfs(int node, vector<pair<int, int>> adj[], vector<bool> &visited, stack<int> &s)
{
    visited[node] = 1;
    for (int i = 0; i < adj[node].size(); i++)
    {
        int neighbour = adj[node][i].first;
        if (!visited[neighbour])
        {
            dfs(neighbour, adj, visited, s);
        }
    }
    s.push(node);
}

vector<int> srtest_path(vector<pair<int, int>> adj[], int vertex, int edge)
{
    // vector<int> indeg(vertex, 0);
    // for (int i = 0; i < vertex; i++)
    //     for (int j = 0; j < adj[node].size(); j++)
    //     {
    //         indeg[adj[i][j]]++;
    //     }

    stack<int> s1;
    vector<bool> visited(vertex, 0);
    // dfs(0, adj, visited, s1);
    // perform dfs from the all not visited node
    for (int i = 0; i < vertex; i++)
    {
        if (!visited[i])
        {
            dfs(i, adj, visited, s1);
        }
    }

    // we have to make a dist vector to store the initial distance
    vector<int> dis(vertex, INT_MAX);
    dis[0] = 0;

    while (!s1.empty())
    {
        int node = s1.top();
        s1.pop();
        for (int i = 0; i < adj[node].size(); i++)
        {
            int neighbour = adj[node][i].first;
            int weight = adj[node][i].second;
            dis[neighbour] = min(dis[node] + weight, dis[neighbour]);
        }
    }

    for (int i = 0; i < vertex; i++)
    {
        if (dis[i] == INT_MAX)
        {
            dis[i] = -1;
        }
    }

    return dis;
}
int main()
{
    int vertex, edge;
    cout << "Enter the vertex:";
    cin >> vertex;
    vector<pair<int, int>> adjlist[vertex];

    cout << "Enter the edge:";
    cin >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v, weight;
        cout << "Enter the edges (u v & weight) formate:";
        cin >> u >> v >> weight;
        adjlist[u].push_back(make_pair(v, weight));
    }

    // printing the graph
    cout << "\nAdjency list:" << endl;
    for (int i = 0; i < vertex; i++)
    {
        cout << i << "->";
        for (auto result : adjlist[i])
        {
            cout << "{ " << result.first << "," << result.second << " }" << " ";
        }
        cout << endl;
    }

    vector<int> dis_result = srtest_path(adjlist, vertex, edge);

    cout << "Distance of nodes from 0." << endl;
    for (int i = 0; i < vertex; i++)
    {
        cout << "Distance of " << i << " is ";
        if (dis_result[i] == -1)
        {
            cout << "Unreachable";
        }
        cout << dis_result[i] << " km" << endl;
    }

    return 0;
}