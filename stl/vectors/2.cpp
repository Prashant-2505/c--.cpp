// pair of vector

#include<bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>> V)
{
    cout<<" Size of vector is "<<V.size()<<endl;
    for(int i=0; i<V.size(); i++)
    {
        cout<<V[i].first<<" "<<V[i].second<<endl;
    }
}
int main()
{

    vector<pair<int,int>> A;
    int n=3;
    // user input in pair of vector
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x;
        cin>>y;
        A.push_back(pair<int,int>(x,y));
    }
   print(A);
    return 0;
}