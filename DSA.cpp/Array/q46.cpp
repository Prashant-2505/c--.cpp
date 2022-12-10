//[merge interval ]
//[using vector of vector]

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> A)
{
  sort(A.begin(), A.end());
  vector<vector<int>> merged;

  for(int i=0;i<A.size();i++)
  {
        if(merged.empty() || merged.back()[1]<A[i][0])
        {
            vector<int> v = 
            {
                A[i][0],  A[i][1]
            };

            merged.push_back(v);
        }

        else
        {
            merged.back()[1] = max(merged.back()[1],A[i][1]);
        }
  }
return merged;

}

int main()
{
    int n;
    cout << " Parent size of vector " << endl;
    cin >> n;
    int m;
    cout << " Child size of vector " << endl;
    cin >> m;

    vector<vector<int>> V;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        V.push_back(temp);
    }


     vector < vector < int >> ans = solution(V);
     for (auto it: ans) {
    cout << it[0] << " " << it[1] << "\n";
  }
    return 0;
}