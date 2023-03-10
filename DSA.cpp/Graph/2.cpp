// Rpresenting graph using adjency matrix 

#include <iostream>
#include <vector>

using namespace std;

class Graph
{
private:
    int numVertices;
    vector<vector<int>> adjMatrix;

public:
    Graph(int n)
    {
        numVertices = n;
        // if the graph is o based indexed the take size n
        // if the graph is 1 base indexed then take size n+1
        adjMatrix.resize(n, vector<int>(n, 0)); // initialize the matrix with 0s
    }

    void addEdge(int src, int dest, bool direction)
    {
        adjMatrix[src][dest] = 1; // set the corresponding matrix element to 1
        if (direction)
        {
            adjMatrix[dest][src] = 1; // undirected graph: set the symmetric element to 1 as well
        }
    }

    void printGraph()
    {
        for (int i = 0; i < numVertices; i++)
        {
            for (int j = 0; j < numVertices; j++)
            {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of Nodes -->";
    cin >> n;
    cout << endl;
    int m;
    cout << "Enter the number of Edges -->";
    cin >> m;
    cout << endl;
    bool direction;
    cout << " Graph is directed then enter 0 or undirected enter 1 -->";
    cin >> direction;
    Graph g(n); // create a graph with 5 vertices
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, direction);
    }
    g.printGraph();

    return 0;
}
