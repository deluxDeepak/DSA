// Arry vector
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, e;
    cout << "Enter the size of the vertex";
    cin >> v;
    vector<pair<int,int>> adj_list[v];

    // Undirected graph
    // adj_list[0].push_back(make_pair(0,5));
    // adj_list[1].push_back(make_pair(1,5));
    // For undirected graph
        // adj_list[u].push_back({v1, weight});
        // adj_list[v1].push_back({u, weight});

    cout << "Enter the number of edges.";
    cin >> e;

    // usiing for loop to store the edges and vertex
    for (int i = 0; i < e; i++)
    {
        int u, v1,weight;
        cout << "Enter the u v weight formate:";
        cin >> u >> v1>>weight;
        adj_list[u].push_back(make_pair(v1,weight));
        adj_list[v1].push_back(make_pair(u,weight));
    }

    // print the adjency list
    for (int i = 0; i < v; i++)
    {
        cout << i << "->";
        for (auto print : adj_list[i])
        {
            cout<<"(" <<print.first <<","<<print.second<< " )" <<" ";
        }
        cout << endl;
    }

    return 0;
}