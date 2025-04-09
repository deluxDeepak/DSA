#include <iostream>
#include<vector>
using namespace std;
int main()
{
    // vertex 0 nahi hona chiye 
    int vertex,edge;
    cout<<"Enter the vertex : ";
    cin>>vertex;

    // number vertex also non negative 
    if (vertex<=0)
    {
        cout<<"Invalid vertex !"<<endl;
        return 1;
    }
    // Number of edges (must be non-negative and not exceed maximum possible edges)
    cout<<"Enter the edge : ";
    cin>>edge;
    if (edge<0 || edge>vertex*(vertex-1)/2)
    {
        cout<<"Invalid edge !"<<endl;
        return 1;
    }
    vector<vector<int> >adj_mat(vertex,vector<int>(vertex,0));
    cout<<"Enter the edges(u v frmate): ";
    int u,v,weight;
    for (int i = 0; i < edge; i++)
    {
        cin>>u>>v>>weight;
        adj_mat[u][v] =weight;
        adj_mat[v][u] = weight;  // undirected graph so we need to add edge in both direction  
    }
    // Display the adjacency matrix
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
            cout<<adj_mat[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}