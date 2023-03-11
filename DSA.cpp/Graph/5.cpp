// BFS

#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;
    int numNodes;

    Graph(int n)
    {
        numNodes = n;
    }

    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (direction)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << "--> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

    vector<int> BFShelper(int numNodes, unordered_map<int, list<int>> adj, int src)
    {
        // 1st step check is it 0 or 1 based indexing graph  if its 0 based the aarya size will of bfs will be n or 1 based size will n+1 n is no of nodes
        unordered_map<int, bool> vis;
        vis[src] = 1;
        queue<int> q;
        q.push(src);
        vector<int> ans;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
    vector<int> BFS(int src)
    {
        return BFShelper(numNodes, adj, src);
    }
};

int main()
{
    int n;
    cout << "enter the no of nodes" << endl;
    cin >> n;

    int m;
    cout << " enter the no of edges" << endl;
    cin >> m;

    cout << " if graph is non directed enter 1 else enter 0" << endl;
    bool direction;
    cin >> direction;

    Graph g(n);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, direction);
    }
    g.print();

    cout << endl;
    cout << endl;
    cout << endl;

    cout << " Enter the source of bfs " << endl;
    int src;
    cin >> src;
    cout << "BFS traversal of a graph is " << endl;
    vector<int> bfs = g.BFS(src);
    for (int i = 0; i < bfs.size(); i++)
    {
        cout << bfs[i] << " ";
    }

    return 0;
}