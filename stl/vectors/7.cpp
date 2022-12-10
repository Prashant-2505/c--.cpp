// array of vector 
#include<bits/stdc++.h>
using namespace std;

void array_vector()
{
    int N;
    cout<<" ENter the legth of vector ";
    cin>>N;
    int M;
    cout<<" Enter the length of array ";
    cin>>M;
    
    vector <int> A[N];
    for(int i=0;i<N;i++)
    {
        cout<<" Enter the array elements at vector "<<i+1<<endl;
        for(int j=0;j<M;j++)
        {
            int X;
            cin>>X;
            A[i].push_back(X);
        }
    }

for(int i=0;i<N;i++)
{
    cout<<"vector "<<i+1<<" array elements "<<endl;
    for(int j=0;j<M;j++)
    {
        cout<<A[i] [j];
    }
    cout<<endl;
}

}
int main()
{
array_vector();
    return 0;
}