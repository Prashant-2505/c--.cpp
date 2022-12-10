// print 2d array like wave


#include<bits/stdc++.h>
using namespace std ;

void ans (int A[][3])
{

vector<int>V;

    for(int col=0;col<3;col++)
    {
        if(col&1)                            //  if col index is odd
        {
            for(int row=2;row>=0;row--)
            {
                V.push_back(A[row][col]);
            }
        }

        else                               // if col index is even 
        { 
              for(int row=0;row<3;row++)
            {
                 V.push_back(A[row][col]);
            }
        }
    }

     for(int i=0;i<9;i++)
     {  
        cout<<V[i]<<" ";
     }
}

int main()
{

    int n = 3;
    int m = 3;

    int A[3][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
     
     ans(A);
return 0;
}