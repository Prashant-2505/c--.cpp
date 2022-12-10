#include <bits/stdc++.h>
using namespace std;
void sort_array()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N);
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
}

void sort_vector()
{
    int M;
    cin>>M;
    vector<int> A;
    for(int i=0;i<M;i++)
    {
        int X;
        cin>>X;
        A.push_back(X);
    }
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    sort_array();
    cout<<endl;
    sort_vector();
    return 0;
}