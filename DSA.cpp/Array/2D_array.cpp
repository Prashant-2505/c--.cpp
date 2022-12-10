#include <iostream>
using namespace std;

int main()
{

    int A[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< A[i][j];
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    int *B[3];
    B[0] = new int [3];
    B[1] = new int [3];
    B[2] = new int [3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
        }
    }

        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<B[i][j];
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    int **C;
    C = new int *[1];
    C[0] = new int [3];
   C[1] = new int [3];
   C[2] = new int [3];


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>C[i][j];
        }
    }

        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j];
        }
        cout<<endl;
    }
    return 0;
}