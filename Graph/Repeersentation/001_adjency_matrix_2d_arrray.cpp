#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v = 5;
    int adj_matrix[v][v] = {0};

    // manually add  the edges
    // adj_matrix[0][1] = 1;
    // adj_matrix[1][0] = 1;
    // adj_matrix[2][3] = 1;
    // adj_matrix[3][2] = 1;
    // adj_matrix[4][3] = 1;
    // adj_matrix[3][4] = 1;

    // by using the loop
    for (int i = 0; i < v; i++)
    {
        cout << "Enter the edges(U v formate )";
        int u, t;
        cin >> u >> t;
        adj_matrix[u][t] = 1;
        adj_matrix[t][u] = 1;
    }

    // Print the adjacency matrix
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < v; ++i) {
        for (int j = 0; j < v; ++j) {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}