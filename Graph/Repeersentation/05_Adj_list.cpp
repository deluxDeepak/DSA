#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int vertex, edges;
    cout << "Enter the number of vertex";
    cin >> vertex;

    // Array of vector create kar rehe hai
    vector<int> adj_list[vertex];

    cout << "Enter the number edges ";
    cin >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cout << "Enter the Connection in formate(U V )" << endl;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    // Print the graph

    for (int i = 0; i < vertex; i++)
    {
        cout << i << "-> ";

        // Ye out of range ja reha hai aur garbage value de reha hai
        // for (int j = 0; j < vertex; j++)
        // {
        //     cout<<adj_list[i][j]<<" ";
        // }

        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout << adj_list[i][j] << "-> ";
        }
        cout << "\n";
    }

    return 0;
}