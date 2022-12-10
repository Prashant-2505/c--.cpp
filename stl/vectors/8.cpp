// vector of vector
#include <bits/stdc++.h>
using namespace std;

void vector_vector()
{
    vector<vector<int>> V;
    int N;
    cout << " Enter the size of parent vector : ";
    cin >> N;
    int M;
    cout << " Enter the length of child vector : ";
    cin >> M;

    for (int i = 0; i < N; i++)
    {
        cout << " Enter the element of vector " << i  << endl;
        vector<int> temp;
        for (int j = 0; j < M; j++)
        {
            int X;
            cin >> X;
            temp.push_back(X);
        }
        V.push_back(temp);
    }

    for (int i = 0; i < V.size(); i++)
    {
        cout << " vector " << i  << " ";
        for (int j = 0; j < M; j++)
        {
              
            cout << V[i][j];
        }
        cout << endl;
    }
    cout<<endl;

}
int main()
{
    vector_vector();

    return 0;
}