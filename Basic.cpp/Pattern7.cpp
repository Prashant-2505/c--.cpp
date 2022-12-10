// Pyramid




#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<" WNter the total elements of the matrix ";
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
                cout << " *";
            }
        }
        cout << endl;
    }

    return 0;
}