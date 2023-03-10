#include <iostream>
#include <vector>

using namespace std;

// Graph class
class Graph {
private:
    int num_vertices; // number of vertices in the graph
    vector<vector<int>> adj_list; // adjacency list

public:
    // Constructor
    Graph(int V) {
        num_vertices = V;
        adj_list.resize(num_vertices);
    }

    // Function to add an edge to the graph
    void addEdge(int v, int w,bool direction) {
        adj_list[v].push_back(w);
       if(direction)
       {
         adj_list[w].push_back(v); // for undirected graph
       }
    }

    // Function to print the adjacency list
    void print() {
        for (int i = 0; i < num_vertices; i++) {
            cout << i << ": ";
            for (int j = 0; j < adj_list[i].size(); j++) {
                cout << adj_list[i][j] << " ";
            }
            cout << endl;
        }
    }
};

// Driver program to test the Graph class
int main() {
    int n;
   cout << " enter the no of nodes" << endl;
   cin >> n;
   int m;
   cout << " enter the no of edges" << endl;
   cin >> m;
   int num_vertices;

   Graph G(n);


   cout << "enter the two connected nodes" << endl;
   for (int i = 0; i < m; i++)
   {
      int u, v;
      cin >> u >> v;
      G.addEdge(u, v, 0);
   }

   G.print();

    return 0;
}
