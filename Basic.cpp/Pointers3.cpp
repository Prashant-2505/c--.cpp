// Pointer airthmetic

// 1--> p++
// 2--> p--
// 3--> p+2
// 4--> p-2
// 5--> q-p   q is another pointer

#include <iostream>
using namespace std;

int main()
{

    int A[5] = {2, 4, 6, 8, 10};
    int *p = A;
    int *q = &A[3];

    cout << *p << endl;
    p++;                     // p++ means it doesn't increase the value it it will goes on higher address
    cout << *p << endl;

    cout << *p << endl;      // p-- means it doesn't decrease the value it it will goes on lower address
    p--;
    cout << *p << endl;

    cout << p + 2 << endl;
    cout << p[3] << endl;

    cout << *q << endl;
    cout << q - p << endl; // its give positive output means p is near and q is far and distance between p and q is 3
    cout << p - q << endl; // its give negative output means p is near and q is far and distance between p and q is 3

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << &A<<i<< " ";
    }
    

    return 0;
}