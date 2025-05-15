#include <iostream>
using namespace std;

int main()
{
    int v = 5;
    int adj_matrix[v][v] = {0};

    // by using the loop
    for (int i = 0; i < v; i++)
    {
        cout << "Enter the edge (U V format): ";
        int u, v2;
        cin >> u >> v2;
        adj_matrix[u][v2] = 1;
        adj_matrix[v2][u] = 1;
    }

    // Print the adjacency matrix
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < v; ++i)
    {
        for (int j = 0; j < v; ++j)
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
