#include <iostream>
#include <vector>
#include <queue>
using namespace std;
// To find the sortest path(BFS)

vector<int> shorted(int src, vector<int> adjlist[], int vertex)
{
    vector<bool> visited(vertex, 0);
    vector<int> dis(vertex, -1);
    queue<int> q;
    visited[src] = 1;
    dis[src] = 0;
    q.push(src);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (int i = 0; i < adjlist[node].size(); i++)
        {
            if (visited[adjlist[node][i]])
            {
                continue;
            }
            visited[adjlist[node][i]] = 1;
            q.push(adjlist[node][i]);
            dis[adjlist[node][i]] = dis[node] + 1;
        }

        // Ranged based for loop
        // for(int neighbour:adjlist[node])
        // {
        //     if (visited[neighbour])
        //     {
        //         continue;
        //     }
        //     visited[neighbour]=1;
        //     q.push(neighbour);
        //     dis[neighbour]=dis[node]+1;
        // }
    }
    return dis;
}
int main()
{
    int vertex, edge;
    cout << "Enter the vertex:";
    cin >> vertex;
    cout << "Enter the number of edges:";
    cin >> edge;
    vector<int> adjlist[vertex];

    for (int i = 0; i < edge; i++)
    {
        int u, v;

        // we can also check the edges of the graph is valid or not
        cout << "Enter the edges in u v fromate:";
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    // print the graph
    cout << "\nAdjency list of the graph." << endl;
    for (int i = 0; i < vertex; i++)
    {
        cout << i << "->";
        for (auto result : adjlist[i])
        {
            cout << result << " ";
        }
        cout << endl;
    }

    // We can also take source node as input
    // int src;
    // cout << "Enter the source node:";
    // cin >> src;
    // if (src < 0 || src >= 0)
    // {
    //     cout << "Invalid source node!" << endl;
    // }

    vector<int> result = shorted(0, adjlist, vertex);

    cout << "The distance of nodes from source node:" << endl;
    // for (auto resultvec : result)
    // {
    //     cout << resultvec << " ";
    // }

    for (int i = 0; i < vertex; i++)
    {
        cout << "Dis of " << i << " =" << result[i] << " unit" << endl;
    }

    return 0;
}