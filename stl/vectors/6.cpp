//array of vector
#include <bits/stdc++.h>
using namespace std;

int main()

{

    vector<int> V[5];
    int N = 3;
    int n = 2;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            V[i].push_back(x);
        }
    }

    for (int i = 0; i < N; i++)    // run for vector 
    {
      for(int j=0;j<n;j++)         //  run for array
      {
        cout <<  V[i][j];
      }
        cout << endl;
    }

    return 0;
}