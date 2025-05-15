// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
void dfs_traversal(int node,vector<bool>&visited,vector<int>adj[],vector<int>&ans)
{
    visited[node]=1;
    ans.push_back(node);
    for (int i = 0; i < adj[node].size(); i++)
    {
        if(!visited[adj[node][i]])
        dfs_traversal(adj[node][i],visited,adj,ans);
    }
    
    
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
    vector<bool>visited(vertex,0);
    vector<int>ans;
    dfs_traversal(0,visited,adj_list,ans);

    cout<<"DFS traversal:";
    for (auto result:ans)
    {
        cout<<result <<" ";
    }
    

    return 0;
}
