#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> Bfs_traversal(int node, vector<int> adj[], vector<int> &visited)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    vector<int> ans;
    while (!q.empty())
    {
        int dataNode = q.front();
        q.pop();
        ans.push_back(dataNode);
        // adj[dataNode].size() //Current node ka neighbour ko check karna hai
        // adj[node].size() //ye galat hoga
        for (int i = 0; i < adj[dataNode].size(); i++)
        {
            // Neighbour node check karega
            if (!visited[adj[dataNode][i]])
            {
                visited[adj[dataNode][i]] = 1;
                q.push(adj[dataNode][i]); // Neighbour ko push karo
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

    vector<int> viisted(vertex, 0);

    // Agar graph connected hai, first BFS call poora graph cover kar lega → result me poora traversal aa jaayega.
    // technically connected graph me ye kaam karega.
    // Lekin ye disconnected graph ke liye galat hai, kyunki last component hi result me bachega.
    //  result = Bfs_traversal(i, adj_list, viisted);



    vector<int> result;
    for (int i = 0; i < vertex; i++)
    {
        if (!viisted[i])
        {
            // Disconnected graph ke liye isko use karna prega 
            // vector<int>components = Bfs_traversal(i, adj_list, viisted);
            // result.insert(result.end(),components.begin(),components.end());

            // Bus result store kara reha hai 
            result = Bfs_traversal(i, adj_list, viisted);
        }
    }

    cout << "BFS traversal : ";
    for (auto data : result)
    {
        cout << data << " ";
    }

    return 0;
}