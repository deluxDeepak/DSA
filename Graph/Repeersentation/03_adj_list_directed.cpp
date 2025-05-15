// Arry vector
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, e;
    cout << "Enter the size of the vertex";
    cin >> v;
    vector<int> adj_list[v];

    cout << "Enter the number of edges.";
    cin >> e;

    // usiing for loop to store the edges and vertex
    for (int i = 0; i < e; i++)
    {
        int u, v1;
        cout << "Enter the u v formate:";
        cin >> u >> v1;
        adj_list[u].push_back(v1);
    }

    // print the adjency list
    for (int i = 0; i < v; i++)
    {
        cout << i << "->";
        for (auto print : adj_list[i])
        {
            cout << print << " ";
        }
        cout << endl;
    }

    return 0;
}