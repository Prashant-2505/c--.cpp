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
    void addEdge(int v, int w) {
        adj_list[v].push_back(w);
        adj_list[w].push_back(v); // for undirected graph
    }

    // Recursive function to explore the connected component
    void dfs(int v, vector<bool>& visited, vector<int>& component) {
        visited[v] = true;
        component.push_back(v);
        for (int i = 0; i < adj_list[v].size(); i++) {
            int neighbor = adj_list[v][i];
            if (!visited[neighbor]) {
                dfs(neighbor, visited, component);
            }
        }
    }

    // Function to find the connected components of the graph using DFS
    vector<vector<int>> findConnectedComponents() {
        vector<bool> visited(num_vertices, false); // initialize all vertices as unvisited
        vector<vector<int>> components; // store the connected components
        for (int i = 0; i < num_vertices; i++) {
            if (!visited[i]) {
                vector<int> component; // initialize an empty component
                dfs(i, visited, component); // explore the component using DFS
                components.push_back(component); // add the component to the list of components
            }
        }
        return components;
    }
};

// Driver program to test the Graph class
int main() {
    Graph g(7); // create a graph with 7 vertices

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(5, 6);

    vector<vector<int>> components = g.findConnectedComponents(); // find the connected components

    // print the connected components
    for (int i = 0; i < components.size(); i++) {
        cout << "Component " << i+1 << ": ";
        for (int j = 0; j < components[i].size(); j++) {
            cout << components[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
