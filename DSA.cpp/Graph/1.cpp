
// Rpresenting graph using adjency list
 
//  if we are using map of list then we are unable to given the nodes size means we give no of nodes but graph
//  tottaly depended on the no of edges it can be resize of map like a vector can 
//  so we can also use vector its more controlled then map of list and space and time both are same nothing changed

#include <bits/stdc++.h>
using namespace std;
template <typename T>

class graph
{
public:
   int num_vertices;
   unordered_map<T, list<T>> adj;

   graph(int V)
   {
      num_vertices = V;
      adj.reserve(num_vertices);
   }

   void addEdge(T u, T v, bool direction)
   {
      adj[u].push_back(v);
      // direction = 0 -> undirected graph
      // direction = 1 -> directed grpah
      if (direction == 0)
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
};

int main()
{
   int n;
   cout << " enter the no of nodes" << endl;
   cin >> n;
   int m;
   cout << " enter the no of edges" << endl;
   cin >> m;
   int num_vertices;

   graph<int> g(n);

   cout << "enter the two connected nodes" << endl;
   for (int i = 0; i < m; i++)
   {
      int u, v;
      cin >> u >> v;
      g.addEdge(u, v, 0);
   }

   g.print();
   return 0;
}