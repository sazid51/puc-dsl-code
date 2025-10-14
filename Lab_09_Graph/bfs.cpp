
#include<bits/stdc++.h>
using namespace std;

void bfs(int s, vector<vector<int>> & graph)
{
    int n = graph.size(); //no. of vertices in graph
    vector<bool> visited(n, false); // to track visited vertices

    queue<int>q;
    q.push(s);
    visited[s]=true;
    cout<<"BFS Traversal: "<<" ";

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout<<node<<" ";

        for(auto neighbour:graph[node])
        {
            if(!visited[neighbour])
            {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }

}

int main() {
    int v,e;
    cout<<"Enter number of vertices and edges: ";
    cin>>v>>e;

    vector<vector<int>> graph(v);

    cout<<"Enter edges:"<<endl;

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int s;
    cout<<"Enter Start Node: ";
    cin>>s;
    bfs(s,graph);
}
