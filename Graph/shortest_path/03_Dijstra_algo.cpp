#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// 1.Method without using min heap(Distance from the source node )
vector<int> dij_algo(vector<pair<int, int>> adj[], int vertex, int source_node)
{
    vector<int> explore(vertex, 0);
    vector<int> distance(vertex, INT_MAX);

    // we need to inittilize the source node
    distance[source_node] = 0;

    // update the value of the node if less
    // Algorithm should run v times
    
    for (int count = 0; count < vertex - 1; count++)
    {
        int node=-1;
        int value = INT_MAX;
        for (int i = 0; i < vertex; i++)
        {
            if (!explore[i] && value > distance[i])
            {
                node = i;
                value = distance[i];
            }
        }

        // Mark the selcted node as explored 
        explore[node]=1;

        // Relax the edges
        for (int i = 0; i < adj[node].size(); i++)
        {
            int neighbour = adj[node][i].first;
            int weight = adj[node][i].second;
            if (!explore[neighbour] && distance[node] + weight < distance[neighbour])
            {
                distance[neighbour] = distance[node] + weight;
            }
        }
    }
    return distance;
}

int main()
{
    // Undirected graph

    int vertex, edge;
    cout << "Enter the vertex:";
    cin >> vertex;
    cout << "Enter the edges:";
    cin >> edge;
    vector<pair<int, int>> adj_list[vertex];

    for (int i = 0; i < edge; i++)
    {
        int u, v, weight;
        cout << "Enter the edges (u v & weight):";
        cin >> u >> v >> weight;
        adj_list[u].push_back({v, weight});
        adj_list[v].push_back({u, weight});
    }

    // printf the graph in adjency list
    for (int i = 0; i < vertex; i++)
    {
        cout << i << "->";
        for (auto result : adj_list[i])
        {
            cout << "{ " << result.first << "," << result.second << " }";
        }
        cout << endl;
    }

    // The source node is neccessery
    int source = 0;

    vector<int> result = dij_algo(adj_list, vertex, source);
    cout << "Distance of node from tehe source node 0:" << endl;
    for (int i = 0; i < vertex; i++)
    {
        cout << "Distance of node " << i << " is " << result[i] << endl;
    }

    return 0;
}