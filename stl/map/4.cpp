// leetcode 169

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> M;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;
        M[X]++;
        if(M[X]>N/2)  cout<<M[X]<<endl;
    }
   
}