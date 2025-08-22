#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vertex, edges;
    // int matrix[vertex][vertex];

    cout << "Enter number of vertex ";
    cin >> vertex;

    // Check the vertex is valid or not
    if (vertex < 0)
    {
        cout << "Inavlid vertex " << endl;
        return 0;
    }

    cout << "Enter the number of edges ";
    cin >> edges;

    // Check the condition for edges
    if (edges < 0 || edges > vertex * (vertex - 1) / 2)
    {
        cout << "Invalid edges " << endl;
        return 0;
    }

    vector<vector<bool>> matrix(vertex, vector<bool>(vertex, 0));
    // Take the input from the uses
    cout << "Enter edges in formate(U V)" << endl;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    cout << "adjency Matrix is " << endl;
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}