
#include<bits/stdc++.h>
using namespace std;

void dfs(int s, vector<vector<int>> & graph)
{
    int n = graph.size(); //no. of vertices in graph
    vector<bool> visited(n, false); // to track visited vertices

    stack<int>st;
    st.push(s);

    cout<<"DFS Traversal: "<<" ";

    while(!st.empty())
    {
        int node = st.top();
        st.pop();

        if(!visited[node])
        {
            visited[node]=true;
            cout<<node<<" ";

            for(auto adjacent:graph[node])
            {
                if(!visited[adjacent]) st.push(adjacent);
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
    dfs(s,graph);
}
