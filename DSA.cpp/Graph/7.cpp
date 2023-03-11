// BFS USING VECTOR OF VECTOR
// of 0 based indexing graph

#include <bits/stdc++.h>
#include <vector>

using namespace std;

// Graph class
class Graph
{
private:
    int numNodes;
    vector<vector<int>> adj;

public:
    Graph(int V)
    {
        numNodes = V;
        adj.resize(numNodes);
    }

    void addEdge(int v, int w, bool direction)
    {
        adj[v].push_back(w);
        if (direction)
        {
            adj[w].push_back(v);
        }
    }
    vector<int> BFShelper(int src)
    {
        // 1st step check is it 0 or 1 based indexing graph  if its 0 based the aarya size will of bfs will be n or 1 based size will n+1 n is no of nodes
         queue<int>q;
         vector<int>vis(numNodes);
         vector<int> ans;
         q.push(src);
         vis[src]=1;
       while(!q.empty())
       {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(auto it : adj[node])
        {
           if(!vis[it])
           {
            vis[it]=1;
            q.push(it);
           }
        }
       }
       return ans;

    }
    vector<int> BFS(int src)
    {
        return BFShelper(src);
    }

    void print()
    {
        for (int i = 0; i < numNodes+1; i++)
        {
            cout << i << ": ";
            for (int j = 0; j < adj[i].size(); j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};

// Driver program to test the Graph class
int main()
{
    int n;
    cout << " enter the no of nodes" << endl;
    cin >> n;
    int m;
    cout << " enter the no of edges" << endl;
    cin >> m;

    Graph G(n);

    cout << "enter the two connected nodes" << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        G.addEdge(u, v, 0);
    }

    G.print();

    int src;
    cout<<" enter the source"<<endl;
    cin>>src;
    vector<int> bfs = G.BFS(src);

    cout<<endl;
    cout<<endl;
cout<<endl;
cout<<endl;

cout<<"BFS is"<<endl;

     for(auto it: bfs)
     {
        cout<<it<<" ";
     }
    return 0;
}
