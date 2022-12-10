#include<bits/stdc++.h>
using namespace std;

void learn_vector()
{
    vector<int> A;
    A = {1,2,3,4};
    A.push_back(5);
    A.pop_back();
    for (int i = 0; i < A.size(); i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{learn_vector();
    return 0;
}