// same as pattern 4 but this tym matrix is given by user
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<" Enter the elements of the matrix ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}