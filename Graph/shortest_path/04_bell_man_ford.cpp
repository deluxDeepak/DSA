#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Single source 
// Bellman ford algorith is applied on negative weight graph (Directed graph)
vector<int> bellman(vector<vector<int>> &edge, int vertex, int source)
{
    vector<int> distance(vertex, INT_MAX);
    distance[source] = 0;

    // Relax the edges
    for (int i = 0; i < vertex - 1; i++)
    {

        for (auto result : edge)
        {
            int u = result[0];
            int v = result[1];
            int weight = result[2];
            if (distance[u] + weight < distance[v])
            {
                distance[v] = distance[u] + weight;
            }
        }
    }

    // Detect the Negative cycle

    for (int j = 0; j < vertex; j++)
    {
        for (auto result : edge)
        {
            int u = result[0];
            int v = result[1];
            int weight = result[2];
            // Agr value change ho jata hai to negative cycle persent hai
            if (distance[u] + weight < distance[v])
            {
                cout << "Negative cycle detected!" << endl;
                return {}; // Return empty vector
            }
        }
    }

    return distance;
}
int main()
{
    int vertex, edges;
    cout << "Enter the vertex:";
    cin >> vertex;
    cout << "Enter the edges:";
    cin >> edges;
    vector<vector<int>> edge_list;
    for (int i = 0; i < edges; i++)
    {
        int u, v, weight;
        cout << "Enter the edges u v weight formate:";
        cin >> u >> v >> weight;
        edge_list.push_back({u, v, weight});
    }

    cout << "\nEdge list of the graph:" << endl;
    for (int i = 0; i < edges; i++)
    {
        cout << i << " -> {" << edge_list[i][0] << ", " << edge_list[i][1] << ", " << edge_list[i][2] << "}" << endl;
    }

    int source = 0;
    vector<int> result = bellman(edge_list, vertex, source);

    cout << "Distance of the node " << source << endl;
    for (int i = 0; i < vertex; i++)
    {
        cout << "Distance of " << i << "is " << result[i] << endl;
    }

    return 0;
}
