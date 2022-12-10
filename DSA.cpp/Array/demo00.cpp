#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<" enter no of rows ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i >= j)
            {
                cout << " 1";
            }
            else
            {
                cout<<" 2";
            }
        }
        cout << endl;
    }

    return 0;
}