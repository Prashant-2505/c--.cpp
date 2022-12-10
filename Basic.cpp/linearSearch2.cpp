#include <iostream>
using namespace std;

int main()
{
    int A[100];
    int key, n ;
    cout<< " Enter the total no elements ";
    cin>>n;

    cout << " Enter the numbers"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << " enter the key "<<endl;
    cin >>key;

    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            cout << " key is found " << i;
            exit (0);
        }
    }
    cout << "key is not found ";

    return 0;
}