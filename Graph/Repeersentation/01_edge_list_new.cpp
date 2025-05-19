#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Craeting the graph with edges
    int vertex, edges;
    cout << "Enter the edges:";
    cin >> edges;
    if (edges <= 0 || edges > vertex * (vertex - 1))
    {
        cout << "Invallid edges!" << endl;
        return 0;
    }

    cout << "Enter the vertex:";
    cin >> vertex;
    if (vertex <= 0)
    {
        cout << "Invalid vertex!" << endl;
        return 0;
    }

    // vector ke ander ek vector hai jo bhut sara variable store kar sakta hai
    vector<vector<int>> edge_list;
    // craeting the graph
    // edge_list.push_back({1,2,11});
    // edge_list.push_back({2,3 ,333});

    for (int i = 0; i < edges; i++)
    {
        int u, v, weight;
        cout << "Enter the edges u v weight:";
        cin >> u >> v >> weight;
        edge_list.push_back({u, v, weight});           //For directed graph
        edge_list.push_back({v,u,weight});              //For undirected graph
    }

    // Graph created by adjency list using edges
    for (int i = 0; i < edges; i++)
    {
        cout << edge_list[i][0] << "->" << edge_list[i][1] << "(" << edge_list[i][2] << ")" << endl;
    }
    cout<<"Edge list are:"<<endl;
    for (auto result : edge_list)
    {
        cout << result[0] << "->" << result[1] << "(" << result[2] << ")" << endl;
    }

    return 0;
}